// generate by pypp
// original source code: ricoh_camera_sdk/camera_status.hpp

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "ricoh_camera_sdk/capture.hpp"

#include "ricoh_camera_sdk/camera_status.hpp"
// TODO: forward declaration class Capture





void init_ricoh_camera_sdk_camera_status_hpp(pybind11::module scope) {
    pybind11::class_<Ricoh::CameraController::CameraStatus, std::shared_ptr<Ricoh::CameraController::CameraStatus>>(scope, "CameraStatus")
        .def("getBatteryLevel", &Ricoh::CameraController::CameraStatus::getBatteryLevel)
        .def("getCurrentCapture", &Ricoh::CameraController::CameraStatus::getCurrentCapture)
        ;
}
