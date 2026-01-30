from setuptools import find_packages
from setuptools import setup

setup(
    name='image_color_lab',
    version='0.0.0',
    packages=find_packages(
        include=('image_color_lab', 'image_color_lab.*')),
)
