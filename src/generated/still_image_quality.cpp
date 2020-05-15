// generate by pypp
// original source code: ricoh_camera_sdk/still_image_quality.hpp

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "ricoh_camera_sdk/still_image_quality.hpp"





void init_ricoh_camera_sdk_still_image_quality_hpp(pybind11::module scope) {
    pybind11::class_<Ricoh::CameraController::StillImageQuality, Ricoh::CameraController::CaptureSetting, std::shared_ptr<Ricoh::CameraController::StillImageQuality>>(scope, "StillImageQuality")
        .def(pybind11::init<>())
        .def_readonly_static("LargeBest", &Ricoh::CameraController::StillImageQuality::LargeBest)
        .def_readonly_static("LargeBetter", &Ricoh::CameraController::StillImageQuality::LargeBetter)
        .def_readonly_static("LargeGood", &Ricoh::CameraController::StillImageQuality::LargeGood)
        .def_readonly_static("MediumBest", &Ricoh::CameraController::StillImageQuality::MediumBest)
        .def_readonly_static("MediumBetter", &Ricoh::CameraController::StillImageQuality::MediumBetter)
        .def_readonly_static("MediumGood", &Ricoh::CameraController::StillImageQuality::MediumGood)
        .def_readonly_static("SmallBest", &Ricoh::CameraController::StillImageQuality::SmallBest)
        .def_readonly_static("SmallBetter", &Ricoh::CameraController::StillImageQuality::SmallBetter)
        .def_readonly_static("SmallGood", &Ricoh::CameraController::StillImageQuality::SmallGood)
        .def_readonly_static("ExtraSmallBest", &Ricoh::CameraController::StillImageQuality::ExtraSmallBest)
        .def_readonly_static("ExtraSmallBetter", &Ricoh::CameraController::StillImageQuality::ExtraSmallBetter)
        .def_readonly_static("ExtraSmallGood", &Ricoh::CameraController::StillImageQuality::ExtraSmallGood)
        ;
    pybind11::class_<Ricoh::CameraController::StillImageQualityValue, Ricoh::CameraController::CaptureSettingValue, std::shared_ptr<Ricoh::CameraController::StillImageQualityValue>>(scope, "StillImageQualityValue")
        .def(pybind11::init<const std::string &>())
        .def("__eq__", &Ricoh::CameraController::StillImageQualityValue::operator==)
        .def("__ne__", &Ricoh::CameraController::StillImageQualityValue::operator!=)
        .def("toString", &Ricoh::CameraController::StillImageQualityValue::toString)
        ;
}
