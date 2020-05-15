import os
import sys

from setuptools import setup, Extension, find_packages

try:
    import pybind11
    pybind11_include_path = pybind11.get_include()
except ImportError:
    pybind11_include_path = ""

ext_name = "ricoh_camera_sdk"
ext_version = "1.1.0"

py_ver = sys.version_info[:2]

sdk_include_path = ""
sdk_lib_path = ""
for dirname, dirs, filenames in os.walk("./sdk/"):
    if "include" in dirs and "lib" in dirs:
        sdk_include_path = os.path.join(dirname, "include")
        sdk_lib_path = os.path.join(dirname, "lib")

if os.name == "posix":
    import platform
    machine = platform.machine()
    if machine in ["x86_64"]:
        sdk_lib_path = os.path.join(sdk_lib_path, "x64")
    elif machine in ["i386"]:
        sdk_lib_path = os.path.join(sdk_lib_path, "x86")
    elif machine in ["armv7l"]:
        sdk_lib_path = os.path.join(sdk_lib_path, "armv7l")

include_dirs = [
    pybind11_include_path,
    sdk_include_path,
]

libraries = [
    "RicohCameraSDKCpp",
    "mtp",
]


library_dirs = [
    sdk_lib_path,
]

sources = []

for dirname, dirs, filenames in os.walk("src"):
    for filename in filenames:
        if not filename.endswith(".cpp"):
            continue
        sources.append(os.path.abspath(os.path.join(dirname, filename)))

extras = [
]
link_extras = [
]

extension = Extension(
    name=ext_name,
    include_dirs=include_dirs,
    libraries=libraries,
    library_dirs=library_dirs,
    sources=sources,
    extra_compile_args=extras,
    extra_link_args=link_extras,
)


install_requires = []
requirements_path = os.path.join(os.path.dirname(os.path.realpath(__file__)), "requirements.txt")
if os.path.exists(requirements_path):
    with open(requirements_path) as fp:
        install_requires = fp.read().splitlines()

setup(
    name=ext_name,
    version=ext_version,
    packages=find_packages(),
    classifiers=[
        "Development Status :: 4 - Beta",
        "Intended Audience :: Developers",
        "Programming Language :: Python :: 3.6",
        "License :: OSI Approved :: MIT License",
    ],
    ext_modules=[extension],
    install_requires=install_requires,
    zip_safe=False
)
