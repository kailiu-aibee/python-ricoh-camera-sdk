// generate by pypp
// original source code: ricoh_camera_sdk/camera_time.hpp

#include <pybind11/pybind11.h>

#include "ricoh_camera_sdk/camera_time.hpp"





void init_ricoh_camera_sdk_camera_time_hpp(pybind11::module scope) {
    pybind11::class_<Ricoh::CameraController::CameraTime, Ricoh::CameraController::CameraDeviceSetting, std::shared_ptr<Ricoh::CameraController::CameraTime>>(scope, "CameraTime")
        .def(pybind11::init<>())
        .def(pybind11::init<time_t>())
        ;
    pybind11::class_<Ricoh::CameraController::CameraTimeValue, Ricoh::CameraController::CameraDeviceSettingValue, std::shared_ptr<Ricoh::CameraController::CameraTimeValue>>(scope, "CameraTimeValue")
        .def(pybind11::init<time_t>())
        .def("__eq__", &Ricoh::CameraController::CameraTimeValue::operator==)
        .def("__ne__", &Ricoh::CameraController::CameraTimeValue::operator!=)
        .def("get", &Ricoh::CameraController::CameraTimeValue::get)
        .def("toString", &Ricoh::CameraController::CameraTimeValue::toString)
        ;
}
