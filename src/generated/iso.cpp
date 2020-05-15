// generate by pypp
// original source code: ricoh_camera_sdk/iso.hpp

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "ricoh_camera_sdk/iso.hpp"





void init_ricoh_camera_sdk_iso_hpp(pybind11::module scope) {
    pybind11::class_<Ricoh::CameraController::ISO, Ricoh::CameraController::CaptureSetting, std::shared_ptr<Ricoh::CameraController::ISO>>(scope, "ISO")
        .def(pybind11::init<>())
        .def_readonly_static("Auto", &Ricoh::CameraController::ISO::Auto)
        .def_readonly_static("ISO100", &Ricoh::CameraController::ISO::ISO100)
        .def_readonly_static("ISO125", &Ricoh::CameraController::ISO::ISO125)
        .def_readonly_static("ISO140", &Ricoh::CameraController::ISO::ISO140)
        .def_readonly_static("ISO160", &Ricoh::CameraController::ISO::ISO160)
        .def_readonly_static("ISO200", &Ricoh::CameraController::ISO::ISO200)
        .def_readonly_static("ISO250", &Ricoh::CameraController::ISO::ISO250)
        .def_readonly_static("ISO280", &Ricoh::CameraController::ISO::ISO280)
        .def_readonly_static("ISO320", &Ricoh::CameraController::ISO::ISO320)
        .def_readonly_static("ISO400", &Ricoh::CameraController::ISO::ISO400)
        .def_readonly_static("ISO500", &Ricoh::CameraController::ISO::ISO500)
        .def_readonly_static("ISO560", &Ricoh::CameraController::ISO::ISO560)
        .def_readonly_static("ISO640", &Ricoh::CameraController::ISO::ISO640)
        .def_readonly_static("ISO800", &Ricoh::CameraController::ISO::ISO800)
        .def_readonly_static("ISO1000", &Ricoh::CameraController::ISO::ISO1000)
        .def_readonly_static("ISO1100", &Ricoh::CameraController::ISO::ISO1100)
        .def_readonly_static("ISO1250", &Ricoh::CameraController::ISO::ISO1250)
        .def_readonly_static("ISO1600", &Ricoh::CameraController::ISO::ISO1600)
        .def_readonly_static("ISO2000", &Ricoh::CameraController::ISO::ISO2000)
        .def_readonly_static("ISO2200", &Ricoh::CameraController::ISO::ISO2200)
        .def_readonly_static("ISO2500", &Ricoh::CameraController::ISO::ISO2500)
        .def_readonly_static("ISO3200", &Ricoh::CameraController::ISO::ISO3200)
        .def_readonly_static("ISO4000", &Ricoh::CameraController::ISO::ISO4000)
        .def_readonly_static("ISO4500", &Ricoh::CameraController::ISO::ISO4500)
        .def_readonly_static("ISO5000", &Ricoh::CameraController::ISO::ISO5000)
        .def_readonly_static("ISO6400", &Ricoh::CameraController::ISO::ISO6400)
        .def_readonly_static("ISO8000", &Ricoh::CameraController::ISO::ISO8000)
        .def_readonly_static("ISO9000", &Ricoh::CameraController::ISO::ISO9000)
        .def_readonly_static("ISO10000", &Ricoh::CameraController::ISO::ISO10000)
        .def_readonly_static("ISO12800", &Ricoh::CameraController::ISO::ISO12800)
        .def_readonly_static("ISO16000", &Ricoh::CameraController::ISO::ISO16000)
        .def_readonly_static("ISO18000", &Ricoh::CameraController::ISO::ISO18000)
        .def_readonly_static("ISO20000", &Ricoh::CameraController::ISO::ISO20000)
        .def_readonly_static("ISO25600", &Ricoh::CameraController::ISO::ISO25600)
        .def_readonly_static("ISO32000", &Ricoh::CameraController::ISO::ISO32000)
        .def_readonly_static("ISO36000", &Ricoh::CameraController::ISO::ISO36000)
        .def_readonly_static("ISO40000", &Ricoh::CameraController::ISO::ISO40000)
        .def_readonly_static("ISO51200", &Ricoh::CameraController::ISO::ISO51200)
        .def_readonly_static("ISO64000", &Ricoh::CameraController::ISO::ISO64000)
        .def_readonly_static("ISO72000", &Ricoh::CameraController::ISO::ISO72000)
        .def_readonly_static("ISO80000", &Ricoh::CameraController::ISO::ISO80000)
        .def_readonly_static("ISO102400", &Ricoh::CameraController::ISO::ISO102400)
        .def_readonly_static("ISO128000", &Ricoh::CameraController::ISO::ISO128000)
        .def_readonly_static("ISO144000", &Ricoh::CameraController::ISO::ISO144000)
        .def_readonly_static("ISO160000", &Ricoh::CameraController::ISO::ISO160000)
        .def_readonly_static("ISO204800", &Ricoh::CameraController::ISO::ISO204800)
        .def_readonly_static("ISO256000", &Ricoh::CameraController::ISO::ISO256000)
        .def_readonly_static("ISO288000", &Ricoh::CameraController::ISO::ISO288000)
        .def_readonly_static("ISO320000", &Ricoh::CameraController::ISO::ISO320000)
        .def_readonly_static("ISO409600", &Ricoh::CameraController::ISO::ISO409600)
        .def_readonly_static("ISO512000", &Ricoh::CameraController::ISO::ISO512000)
        .def_readonly_static("ISO576000", &Ricoh::CameraController::ISO::ISO576000)
        .def_readonly_static("ISO640000", &Ricoh::CameraController::ISO::ISO640000)
        .def_readonly_static("ISO819200", &Ricoh::CameraController::ISO::ISO819200)
        ;
    pybind11::class_<Ricoh::CameraController::ISOValue, Ricoh::CameraController::CaptureSettingValue, std::shared_ptr<Ricoh::CameraController::ISOValue>>(scope, "ISOValue")
        .def(pybind11::init<const std::string &>())
        .def("__eq__", &Ricoh::CameraController::ISOValue::operator==)
        .def("__ne__", &Ricoh::CameraController::ISOValue::operator!=)
        .def("toString", &Ricoh::CameraController::ISOValue::toString)
        ;
}
