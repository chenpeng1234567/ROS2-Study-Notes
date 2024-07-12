from setuptools import find_packages
from setuptools import setup

setup(
    name='village_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('village_interfaces', 'village_interfaces.*')),
)
