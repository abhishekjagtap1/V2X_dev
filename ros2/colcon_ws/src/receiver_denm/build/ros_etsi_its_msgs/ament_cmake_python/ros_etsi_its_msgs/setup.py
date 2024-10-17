from setuptools import find_packages
from setuptools import setup

setup(
    name='ros_etsi_its_msgs',
    version='0.2.0',
    packages=find_packages(
        include=('ros_etsi_its_msgs', 'ros_etsi_its_msgs.*')),
)
