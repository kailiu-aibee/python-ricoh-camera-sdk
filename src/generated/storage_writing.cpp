// generate by pypp
// original source code: ricoh_camera_sdk/storage_writing.hpp

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "ricoh_camera_sdk/storage_writing.hpp"





void init_ricoh_camera_sdk_storage_writing_hpp(pybind11::module scope) {
    pybind11::class_<Ricoh::CameraController::StorageWriting, Ricoh::CameraController::CaptureSetting, std::shared_ptr<Ricoh::CameraController::StorageWriting>>(scope, "StorageWriting")
        .def(pybind11::init<>())
        .def(pybind11::init<bool>())
        .def_readonly_static("True_", &Ricoh::CameraController::StorageWriting::True)
        .def_readonly_static("False_", &Ricoh::CameraController::StorageWriting::False)
        ;
    pybind11::class_<Ricoh::CameraController::StorageWritingValue, Ricoh::CameraController::CaptureSettingValue, std::shared_ptr<Ricoh::CameraController::StorageWritingValue>>(scope, "StorageWritingValue")
        .def(pybind11::init<bool>())
        .def("__eq__", &Ricoh::CameraController::StorageWritingValue::operator==)
        .def("__ne__", &Ricoh::CameraController::StorageWritingValue::operator!=)
        .def("get", &Ricoh::CameraController::StorageWritingValue::get)
        .def("toString", &Ricoh::CameraController::StorageWritingValue::toString)
        ;
}
