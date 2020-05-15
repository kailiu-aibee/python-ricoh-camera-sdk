// generate by pypp
// original source code: ricoh_camera_sdk/error.hpp

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "ricoh_camera_sdk/error.hpp"





void init_ricoh_camera_sdk_error_hpp(pybind11::module scope) {
    pybind11::class_<Ricoh::CameraController::Error, std::shared_ptr<Ricoh::CameraController::Error>>(scope, "Error")
        .def(pybind11::init<Ricoh::CameraController::ErrorCode, const std::string &>())
        .def("getCode", &Ricoh::CameraController::Error::getCode)
        .def("getMessage", &Ricoh::CameraController::Error::getMessage, pybind11::return_value_policy::reference_internal)
        ;
    pybind11::enum_<Ricoh::CameraController::ErrorCode>(scope, "ErrorCode")
        .value("NetworkError", Ricoh::CameraController::ErrorCode::NetworkError)
        .value("DeviceNotFound", Ricoh::CameraController::ErrorCode::DeviceNotFound)
        .value("ImageNotFound", Ricoh::CameraController::ErrorCode::ImageNotFound)
        .value("InvalidSetting", Ricoh::CameraController::ErrorCode::InvalidSetting)
        .value("InvalidArgument", Ricoh::CameraController::ErrorCode::InvalidArgument)
        .value("NoSpace", Ricoh::CameraController::ErrorCode::NoSpace)
        .value("Forbidden", Ricoh::CameraController::ErrorCode::Forbidden)
        .value("UnknownValue", Ricoh::CameraController::ErrorCode::UnknownValue)
        .value("AFFailed", Ricoh::CameraController::ErrorCode::AFFailed)
        .value("Incomplete", Ricoh::CameraController::ErrorCode::Incomplete)
        .value("UnknownError", Ricoh::CameraController::ErrorCode::UnknownError)
        ;
}
