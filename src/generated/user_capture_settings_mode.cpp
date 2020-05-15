// generate by pypp
// original source code: ricoh_camera_sdk/user_capture_settings_mode.hpp

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "ricoh_camera_sdk/user_capture_settings_mode.hpp"





void init_ricoh_camera_sdk_user_capture_settings_mode_hpp(pybind11::module scope) {
    pybind11::class_<Ricoh::CameraController::UserCaptureSettingsMode, Ricoh::CameraController::CaptureSetting, std::shared_ptr<Ricoh::CameraController::UserCaptureSettingsMode>>(scope, "UserCaptureSettingsMode")
        .def(pybind11::init<>())
        .def_readonly_static("None_", &Ricoh::CameraController::UserCaptureSettingsMode::None)
        .def_readonly_static("User", &Ricoh::CameraController::UserCaptureSettingsMode::User)
        .def_readonly_static("User2", &Ricoh::CameraController::UserCaptureSettingsMode::User2)
        .def_readonly_static("User3", &Ricoh::CameraController::UserCaptureSettingsMode::User3)
        .def_readonly_static("User4", &Ricoh::CameraController::UserCaptureSettingsMode::User4)
        .def_readonly_static("User5", &Ricoh::CameraController::UserCaptureSettingsMode::User5)
        ;
    pybind11::class_<Ricoh::CameraController::UserCaptureSettingsModeValue, Ricoh::CameraController::CaptureSettingValue, std::shared_ptr<Ricoh::CameraController::UserCaptureSettingsModeValue>>(scope, "UserCaptureSettingsModeValue")
        .def(pybind11::init<const std::string &>())
        .def("__eq__", &Ricoh::CameraController::UserCaptureSettingsModeValue::operator==)
        .def("__ne__", &Ricoh::CameraController::UserCaptureSettingsModeValue::operator!=)
        .def("toString", &Ricoh::CameraController::UserCaptureSettingsModeValue::toString)
        ;
}
