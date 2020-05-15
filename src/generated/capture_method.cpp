// generate by pypp
// original source code: ricoh_camera_sdk/capture_method.hpp

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "ricoh_camera_sdk/capture_method.hpp"





void init_ricoh_camera_sdk_capture_method_hpp(pybind11::module scope) {
    pybind11::class_<Ricoh::CameraController::CaptureMethod, Ricoh::CameraController::CaptureSetting, std::shared_ptr<Ricoh::CameraController::CaptureMethod>>(scope, "CaptureMethod")
        .def(pybind11::init<>())
        .def_readonly_static("StillImage", &Ricoh::CameraController::CaptureMethod::StillImage)
        .def_readonly_static("Movie", &Ricoh::CameraController::CaptureMethod::Movie)
        ;
    pybind11::class_<Ricoh::CameraController::CaptureMethodValue, Ricoh::CameraController::CaptureSettingValue, std::shared_ptr<Ricoh::CameraController::CaptureMethodValue>>(scope, "CaptureMethodValue")
        .def(pybind11::init<const std::string &>())
        .def("__eq__", &Ricoh::CameraController::CaptureMethodValue::operator==)
        .def("__ne__", &Ricoh::CameraController::CaptureMethodValue::operator!=)
        .def("toString", &Ricoh::CameraController::CaptureMethodValue::toString)
        ;
}
