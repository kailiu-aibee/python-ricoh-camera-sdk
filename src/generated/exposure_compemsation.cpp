// generate by pypp
// original source code: ricoh_camera_sdk/exposure_compensation.hpp

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "ricoh_camera_sdk/exposure_compensation.hpp"





void init_ricoh_camera_sdk_exposure_compensation_hpp(pybind11::module scope) {
    pybind11::class_<Ricoh::CameraController::ExposureCompensation, Ricoh::CameraController::CaptureSetting, std::shared_ptr<Ricoh::CameraController::ExposureCompensation>>(scope, "ExposureCompensation")
        .def(pybind11::init<>())
        .def_readonly_static("ECNegative5_0", &Ricoh::CameraController::ExposureCompensation::ECNegative5_0)
        .def_readonly_static("ECNegative4_7", &Ricoh::CameraController::ExposureCompensation::ECNegative4_7)
        .def_readonly_static("ECNegative4_5", &Ricoh::CameraController::ExposureCompensation::ECNegative4_5)
        .def_readonly_static("ECNegative4_3", &Ricoh::CameraController::ExposureCompensation::ECNegative4_3)
        .def_readonly_static("ECNegative4_0", &Ricoh::CameraController::ExposureCompensation::ECNegative4_0)
        .def_readonly_static("ECNegative3_7", &Ricoh::CameraController::ExposureCompensation::ECNegative3_7)
        .def_readonly_static("ECNegative3_5", &Ricoh::CameraController::ExposureCompensation::ECNegative3_5)
        .def_readonly_static("ECNegative3_3", &Ricoh::CameraController::ExposureCompensation::ECNegative3_3)
        .def_readonly_static("ECNegative3_0", &Ricoh::CameraController::ExposureCompensation::ECNegative3_0)
        .def_readonly_static("ECNegative2_7", &Ricoh::CameraController::ExposureCompensation::ECNegative2_7)
        .def_readonly_static("ECNegative2_5", &Ricoh::CameraController::ExposureCompensation::ECNegative2_5)
        .def_readonly_static("ECNegative2_3", &Ricoh::CameraController::ExposureCompensation::ECNegative2_3)
        .def_readonly_static("ECNegative2_0", &Ricoh::CameraController::ExposureCompensation::ECNegative2_0)
        .def_readonly_static("ECNegative1_7", &Ricoh::CameraController::ExposureCompensation::ECNegative1_7)
        .def_readonly_static("ECNegative1_5", &Ricoh::CameraController::ExposureCompensation::ECNegative1_5)
        .def_readonly_static("ECNegative1_3", &Ricoh::CameraController::ExposureCompensation::ECNegative1_3)
        .def_readonly_static("ECNegative1_0", &Ricoh::CameraController::ExposureCompensation::ECNegative1_0)
        .def_readonly_static("ECNegative0_7", &Ricoh::CameraController::ExposureCompensation::ECNegative0_7)
        .def_readonly_static("ECNegative0_5", &Ricoh::CameraController::ExposureCompensation::ECNegative0_5)
        .def_readonly_static("ECNegative0_3", &Ricoh::CameraController::ExposureCompensation::ECNegative0_3)
        .def_readonly_static("EC0_0", &Ricoh::CameraController::ExposureCompensation::EC0_0)
        .def_readonly_static("EC0_3", &Ricoh::CameraController::ExposureCompensation::EC0_3)
        .def_readonly_static("EC0_5", &Ricoh::CameraController::ExposureCompensation::EC0_5)
        .def_readonly_static("EC0_7", &Ricoh::CameraController::ExposureCompensation::EC0_7)
        .def_readonly_static("EC1_0", &Ricoh::CameraController::ExposureCompensation::EC1_0)
        .def_readonly_static("EC1_3", &Ricoh::CameraController::ExposureCompensation::EC1_3)
        .def_readonly_static("EC1_5", &Ricoh::CameraController::ExposureCompensation::EC1_5)
        .def_readonly_static("EC1_7", &Ricoh::CameraController::ExposureCompensation::EC1_7)
        .def_readonly_static("EC2_0", &Ricoh::CameraController::ExposureCompensation::EC2_0)
        .def_readonly_static("EC2_3", &Ricoh::CameraController::ExposureCompensation::EC2_3)
        .def_readonly_static("EC2_5", &Ricoh::CameraController::ExposureCompensation::EC2_5)
        .def_readonly_static("EC2_7", &Ricoh::CameraController::ExposureCompensation::EC2_7)
        .def_readonly_static("EC3_0", &Ricoh::CameraController::ExposureCompensation::EC3_0)
        .def_readonly_static("EC3_3", &Ricoh::CameraController::ExposureCompensation::EC3_3)
        .def_readonly_static("EC3_5", &Ricoh::CameraController::ExposureCompensation::EC3_5)
        .def_readonly_static("EC3_7", &Ricoh::CameraController::ExposureCompensation::EC3_7)
        .def_readonly_static("EC4_0", &Ricoh::CameraController::ExposureCompensation::EC4_0)
        .def_readonly_static("EC4_3", &Ricoh::CameraController::ExposureCompensation::EC4_3)
        .def_readonly_static("EC4_5", &Ricoh::CameraController::ExposureCompensation::EC4_5)
        .def_readonly_static("EC4_7", &Ricoh::CameraController::ExposureCompensation::EC4_7)
        .def_readonly_static("EC5_0", &Ricoh::CameraController::ExposureCompensation::EC5_0)
        ;
    pybind11::class_<Ricoh::CameraController::ExposureCompensationValue, Ricoh::CameraController::CaptureSettingValue, std::shared_ptr<Ricoh::CameraController::ExposureCompensationValue>>(scope, "ExposureCompensationValue")
        .def(pybind11::init<const std::string &>())
        .def("__eq__", &Ricoh::CameraController::ExposureCompensationValue::operator==)
        .def("__ne__", &Ricoh::CameraController::ExposureCompensationValue::operator!=)
        .def("toString", &Ricoh::CameraController::ExposureCompensationValue::toString)
        ;
}
