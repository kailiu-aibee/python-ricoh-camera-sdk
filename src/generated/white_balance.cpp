// generate by pypp
// original source code: ricoh_camera_sdk/white_balance.hpp

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "ricoh_camera_sdk/white_balance.hpp"





void init_ricoh_camera_sdk_white_balance_hpp(pybind11::module scope) {
    pybind11::class_<Ricoh::CameraController::WhiteBalance, Ricoh::CameraController::CaptureSetting, std::shared_ptr<Ricoh::CameraController::WhiteBalance>>(scope, "WhiteBalance")
        .def(pybind11::init<>())
        .def_readonly_static("Undefined", &Ricoh::CameraController::WhiteBalance::Undefined)
        .def_readonly_static("Auto", &Ricoh::CameraController::WhiteBalance::Auto)
        .def_readonly_static("Daylight", &Ricoh::CameraController::WhiteBalance::Daylight)
        .def_readonly_static("Tungsten", &Ricoh::CameraController::WhiteBalance::Tungsten)
        .def_readonly_static("Flash", &Ricoh::CameraController::WhiteBalance::Flash)
        .def_readonly_static("Shade", &Ricoh::CameraController::WhiteBalance::Shade)
        .def_readonly_static("Cloudy", &Ricoh::CameraController::WhiteBalance::Cloudy)
        .def_readonly_static("FluorescentDaylight", &Ricoh::CameraController::WhiteBalance::FluorescentDaylight)
        .def_readonly_static("FluorescentDaylightWhite", &Ricoh::CameraController::WhiteBalance::FluorescentDaylightWhite)
        .def_readonly_static("FluorescentCoolWhite", &Ricoh::CameraController::WhiteBalance::FluorescentCoolWhite)
        .def_readonly_static("FluorescentWarmWhite", &Ricoh::CameraController::WhiteBalance::FluorescentWarmWhite)
        .def_readonly_static("Manual", &Ricoh::CameraController::WhiteBalance::Manual)
        .def_readonly_static("Manual2", &Ricoh::CameraController::WhiteBalance::Manual2)
        .def_readonly_static("Manual3", &Ricoh::CameraController::WhiteBalance::Manual3)
        .def_readonly_static("ColorTemperature", &Ricoh::CameraController::WhiteBalance::ColorTemperature)
        .def_readonly_static("ColorTemperature2", &Ricoh::CameraController::WhiteBalance::ColorTemperature2)
        .def_readonly_static("ColorTemperature3", &Ricoh::CameraController::WhiteBalance::ColorTemperature3)
        .def_readonly_static("CTE", &Ricoh::CameraController::WhiteBalance::CTE)
        .def_readonly_static("MultiAuto", &Ricoh::CameraController::WhiteBalance::MultiAuto)
        ;
    pybind11::class_<Ricoh::CameraController::WhiteBalanceValue, Ricoh::CameraController::CaptureSettingValue, std::shared_ptr<Ricoh::CameraController::WhiteBalanceValue>>(scope, "WhiteBalanceValue")
        .def(pybind11::init<const std::string &>())
        .def("__eq__", &Ricoh::CameraController::WhiteBalanceValue::operator==)
        .def("__ne__", &Ricoh::CameraController::WhiteBalanceValue::operator!=)
        .def("toString", &Ricoh::CameraController::WhiteBalanceValue::toString)
        ;
}
