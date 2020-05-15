// generate by pypp
// original source code: ricoh_camera_sdk/hyper_operation_enable.hpp

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "ricoh_camera_sdk/hyper_operation_enable.hpp"





void init_ricoh_camera_sdk_hyper_operation_enable_hpp(pybind11::module scope) {
    pybind11::class_<Ricoh::CameraController::HyperOperationEnable, Ricoh::CameraController::CaptureSetting, std::shared_ptr<Ricoh::CameraController::HyperOperationEnable>>(scope, "HyperOperationEnable")
        .def(pybind11::init<>())
        .def_readonly_static("True_", &Ricoh::CameraController::HyperOperationEnable::True)
        .def_readonly_static("False_", &Ricoh::CameraController::HyperOperationEnable::False)
        ;
    pybind11::class_<Ricoh::CameraController::HyperOperationEnableValue, Ricoh::CameraController::CaptureSettingValue, std::shared_ptr<Ricoh::CameraController::HyperOperationEnableValue>>(scope, "HyperOperationEnableValue")
        .def(pybind11::init<bool>())
        .def("__eq__", &Ricoh::CameraController::HyperOperationEnableValue::operator==)
        .def("__ne__", &Ricoh::CameraController::HyperOperationEnableValue::operator!=)
        .def("get", &Ricoh::CameraController::HyperOperationEnableValue::get)
        .def("toString", &Ricoh::CameraController::HyperOperationEnableValue::toString)
        ;
}
