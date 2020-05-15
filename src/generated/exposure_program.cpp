// generate by pypp
// original source code: ricoh_camera_sdk/exposure_program.hpp

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "ricoh_camera_sdk/exposure_program.hpp"





void init_ricoh_camera_sdk_exposure_program_hpp(pybind11::module scope) {
    pybind11::class_<Ricoh::CameraController::ExposureProgram, Ricoh::CameraController::CaptureSetting, std::shared_ptr<Ricoh::CameraController::ExposureProgram>>(scope, "ExposureProgram")
        .def(pybind11::init<>())
        .def_readonly_static("Unknown", &Ricoh::CameraController::ExposureProgram::Unknown)
        .def_readonly_static("Auto", &Ricoh::CameraController::ExposureProgram::Auto)
        .def_readonly_static("Program", &Ricoh::CameraController::ExposureProgram::Program)
        .def_readonly_static("AperturePriority", &Ricoh::CameraController::ExposureProgram::AperturePriority)
        .def_readonly_static("ShutterSpeedPriority", &Ricoh::CameraController::ExposureProgram::ShutterSpeedPriority)
        .def_readonly_static("ShutterSpeedAndAperturePriority", &Ricoh::CameraController::ExposureProgram::ShutterSpeedAndAperturePriority)
        .def_readonly_static("ISOPriority", &Ricoh::CameraController::ExposureProgram::ISOPriority)
        .def_readonly_static("Manual", &Ricoh::CameraController::ExposureProgram::Manual)
        .def_readonly_static("Bulb", &Ricoh::CameraController::ExposureProgram::Bulb)
        .def_readonly_static("FlashXSyncSpeed", &Ricoh::CameraController::ExposureProgram::FlashXSyncSpeed)
        .def_readonly_static("Astrotracer", &Ricoh::CameraController::ExposureProgram::Astrotracer)
        .def_readonly_static("LensShutter", &Ricoh::CameraController::ExposureProgram::LensShutter)
        ;
    pybind11::class_<Ricoh::CameraController::ExposureProgramValue, Ricoh::CameraController::CaptureSettingValue, std::shared_ptr<Ricoh::CameraController::ExposureProgramValue>>(scope, "ExposureProgramValue")
        .def(pybind11::init<const std::string &>())
        .def("__eq__", &Ricoh::CameraController::ExposureProgramValue::operator==)
        .def("__ne__", &Ricoh::CameraController::ExposureProgramValue::operator!=)
        .def("toString", &Ricoh::CameraController::ExposureProgramValue::toString)
        ;
}
