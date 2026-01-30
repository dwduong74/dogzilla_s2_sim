#!/usr/bin/env python3
# encoding: utf-8

import cv2 as cv
import time
import mediapipe as mp
from mediapipe.tasks import python
from mediapipe.tasks.python import vision


class FaceDetector:
    def __init__(self, minDetectionCon=0.5):
        # Load model (MediaPipe sẽ tự tải nếu chưa có)
        base_options = python.BaseOptions(
            model_asset_path=None  # dùng model mặc định
        )

        options = vision.FaceDetectorOptions(
            base_options=base_options,
            min_detection_confidence=minDetectionCon
        )

        self.detector = vision.FaceDetector.create_from_options(options)

    def findFaces(self, frame):
        h, w, _ = frame.shape
        img_rgb = cv.cvtColor(frame, cv.COLOR_BGR2RGB)

        mp_image = mp.Image(
            image_format=mp.ImageFormat.SRGB,
            data=img_rgb
        )

        detection_result = self.detector.detect(mp_image)

        bboxs = []

        if detection_result.detections:
            for idx, detection in enumerate(detection_result.detections):
                bbox = detection.bounding_box
                x, y, bw, bh = bbox.origin_x, bbox.origin_y, bbox.width, bbox.height

                bboxs.append([idx, (x, y, bw, bh), detection.categories[0].score])

                self.fancyDraw(frame, (x, y, bw, bh))

                score = int(detection.categories[0].score * 100)
                cv.putText(
                    frame,
                    f"{score}%",
                    (x, y - 10),
                    cv.FONT_HERSHEY_PLAIN,
                    2,
                    (255, 0, 255),
                    2
                )

        return frame, bboxs

    def fancyDraw(self, frame, bbox, l=30, t=5):
        x, y, w, h = bbox
        x1, y1 = x + w, y + h

        cv.rectangle(frame, (x, y), (x1, y1), (255, 0, 255), 2)

        # Top-left
        cv.line(frame, (x, y), (x + l, y), (255, 0, 255), t)
        cv.line(frame, (x, y), (x, y + l), (255, 0, 255), t)

        # Top-right
        cv.line(frame, (x1, y), (x1 - l, y), (255, 0, 255), t)
        cv.line(frame, (x1, y), (x1, y + l), (255, 0, 255), t)

        # Bottom-left
        cv.line(frame, (x, y1), (x + l, y1), (255, 0, 255), t)
        cv.line(frame, (x, y1), (x, y1 - l), (255, 0, 255), t)

        # Bottom-right
        cv.line(frame, (x1, y1), (x1 - l, y1), (255, 0, 255), t)
        cv.line(frame, (x1, y1), (x1, y1 - l), (255, 0, 255), t)


if __name__ == "__main__":
    capture = cv.VideoCapture(0)
    capture.set(cv.CAP_PROP_FRAME_WIDTH, 640)
    capture.set(cv.CAP_PROP_FRAME_HEIGHT, 480)

    print("Camera FPS:", capture.get(cv.CAP_PROP_FPS))

    detector = FaceDetector(0.75)

    pTime = 0

    while capture.isOpened():
        ret, frame = capture.read()
        if not ret:
            break

        frame, _ = detector.findFaces(frame)

        cTime = time.time()
        fps = 1 / (cTime - pTime) if pTime != 0 else 0
        pTime = cTime

        cv.putText(
            frame,
            f"FPS: {int(fps)}",
            (20, 30),
            cv.FONT_HERSHEY_SIMPLEX,
            0.8,
            (0, 0, 255),
            2
        )

        cv.imshow("Face Detection", frame)
        if cv.waitKey(1) & 0xFF == ord('q'):
            break

    capture.release()
    cv.destroyAllWindows()

