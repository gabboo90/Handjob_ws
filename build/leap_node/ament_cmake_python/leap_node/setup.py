from setuptools import find_packages
from setuptools import setup

setup(
    name='leap_node',
    version='0.0.1',
    packages=find_packages(
        include=('leap_node', 'leap_node.*')),
)
