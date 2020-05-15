// generate by pypp
// original source code: ricoh_camera_sdk/camera_device_detector.hpp

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "ricoh_camera_sdk/camera_device.hpp"

#include "ricoh_camera_sdk/camera_device_detector.hpp"
// TODO: forward declaration class CameraDevice





void init_ricoh_camera_sdk_camera_device_detector_hpp(pybind11::module scope) {
    pybind11::class_<Ricoh::CameraController::CameraDeviceDetector, std::shared_ptr<Ricoh::CameraController::CameraDeviceDetector>>(scope, "CameraDeviceDetector")
        .def_static("detect", &Ricoh::CameraController::CameraDeviceDetector::detect)
        ;
}
