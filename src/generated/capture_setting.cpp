// generate by pypp
// original source code: ricoh_camera_sdk/capture_setting.hpp

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "ricoh_camera_sdk/capture_setting.hpp"
// TODO: forward declaration class CaptureSettingValue





void init_ricoh_camera_sdk_capture_setting_hpp(pybind11::module scope) {
    pybind11::class_<Ricoh::CameraController::CaptureSetting, std::shared_ptr<Ricoh::CameraController::CaptureSetting>>(scope, "CaptureSetting")
        .def("__repr__", [](Ricoh::CameraController::CaptureSetting &self) {
            using namespace pybind11::literals;
            auto kwargs = pybind11::dict(
                "name"_a=self.getName(),
                "value"_a=self.getValue().toString()
            );
            return "<{name}:{value}>"_s.format(**kwargs);
        })
        .def("__eq__", &Ricoh::CameraController::CaptureSetting::operator==)
        .def("__ne__", &Ricoh::CameraController::CaptureSetting::operator!=)
        .def("getName", &Ricoh::CameraController::CaptureSetting::getName, pybind11::return_value_policy::reference_internal)
        .def("getValue", &Ricoh::CameraController::CaptureSetting::getValue, pybind11::return_value_policy::reference_internal)
        //.def("setValue", &Ricoh::CameraController::CaptureSetting::setValue)
        .def("getAvailableSettings", &Ricoh::CameraController::CaptureSetting::getAvailableSettings, pybind11::return_value_policy::reference_internal)
        .def("toString", &Ricoh::CameraController::CaptureSetting::toString)
        ;
    pybind11::class_<Ricoh::CameraController::CaptureSettingValue, std::shared_ptr<Ricoh::CameraController::CaptureSettingValue>>(scope, "CaptureSettingValue")
        .def("__repr__", [](Ricoh::CameraController::CaptureSettingValue &self) {
            using namespace pybind11::literals;
            auto kwargs = pybind11::dict(
                "name"_a=self.toString()
            );
            return "<{name}>"_s.format(**kwargs);
        })
        .def("__eq__", &Ricoh::CameraController::CaptureSettingValue::operator==)
        .def("__ne__", &Ricoh::CameraController::CaptureSettingValue::operator!=)
        .def("toString", &Ricoh::CameraController::CaptureSettingValue::toString)
        ;
}
