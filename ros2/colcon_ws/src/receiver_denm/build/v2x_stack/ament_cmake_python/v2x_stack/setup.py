from setuptools import find_packages
from setuptools import setup

setup(
    name='v2x_stack',
    version='0.0.1',
    packages=find_packages(
        include=('v2x_stack', 'v2x_stack.*')),
)
