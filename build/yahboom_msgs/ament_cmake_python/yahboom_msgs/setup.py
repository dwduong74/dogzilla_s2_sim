from setuptools import find_packages
from setuptools import setup

setup(
    name='yahboom_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('yahboom_msgs', 'yahboom_msgs.*')),
)
