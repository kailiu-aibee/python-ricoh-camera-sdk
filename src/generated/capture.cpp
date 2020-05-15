// generate by pypp
// original source code: ricoh_camera_sdk/capture.hpp

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "ricoh_camera_sdk/capture_method.hpp"

#include "ricoh_camera_sdk/capture.hpp"
// TODO: forward declaration class CaptureMethod





void init_ricoh_camera_sdk_capture_hpp(pybind11::module scope) {
    pybind11::class_<Ricoh::CameraController::Capture, std::shared_ptr<Ricoh::CameraController::Capture>>(scope, "Capture")
        .def("getId", &Ricoh::CameraController::Capture::getId, pybind11::return_value_policy::reference_internal)
        .def("getMethod", &Ricoh::CameraController::Capture::getMethod, pybind11::return_value_policy::reference_internal)
        .def("getState", &Ricoh::CameraController::Capture::getState)
        ;
    pybind11::enum_<Ricoh::CameraController::CaptureState>(scope, "CaptureState")
        .value("Unknown", Ricoh::CameraController::CaptureState::Unknown)
        .value("Executing", Ricoh::CameraController::CaptureState::Executing)
        .value("Complete", Ricoh::CameraController::CaptureState::Complete)
        ;
}
