// generate by pypp
// original source code: ricoh_camera_sdk/still_image_capture_format.hpp

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "ricoh_camera_sdk/still_image_capture_format.hpp"





void init_ricoh_camera_sdk_still_image_capture_format_hpp(pybind11::module scope) {
    pybind11::class_<Ricoh::CameraController::StillImageCaptureFormat, Ricoh::CameraController::CaptureSetting, std::shared_ptr<Ricoh::CameraController::StillImageCaptureFormat>>(scope, "StillImageCaptureFormat")
        .def(pybind11::init<>())
        .def_readonly_static("JPEG", &Ricoh::CameraController::StillImageCaptureFormat::JPEG)
        .def_readonly_static("PEF", &Ricoh::CameraController::StillImageCaptureFormat::PEF)
        .def_readonly_static("DNG", &Ricoh::CameraController::StillImageCaptureFormat::DNG)
        .def_readonly_static("PEFAndJPEG", &Ricoh::CameraController::StillImageCaptureFormat::PEFAndJPEG)
        .def_readonly_static("DNGAndJPEG", &Ricoh::CameraController::StillImageCaptureFormat::DNGAndJPEG)
        .def_readonly_static("TIFF", &Ricoh::CameraController::StillImageCaptureFormat::TIFF)
        ;
    pybind11::class_<Ricoh::CameraController::StillImageCaptureFormatValue, Ricoh::CameraController::CaptureSettingValue, std::shared_ptr<Ricoh::CameraController::StillImageCaptureFormatValue>>(scope, "StillImageCaptureFormatValue")
        .def(pybind11::init<const std::string &>())
        .def("__eq__", &Ricoh::CameraController::StillImageCaptureFormatValue::operator==)
        .def("__ne__", &Ricoh::CameraController::StillImageCaptureFormatValue::operator!=)
        .def("toString", &Ricoh::CameraController::StillImageCaptureFormatValue::toString)
        ;
}
