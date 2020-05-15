// generate by pypp
// original source code: ricoh_camera_sdk/camera_device_setting.hpp

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "ricoh_camera_sdk/camera_device_setting.hpp"
// TODO: forward declaration class CameraDeviceSettingValue





void init_ricoh_camera_sdk_camera_device_setting_hpp(pybind11::module scope) {
    pybind11::class_<Ricoh::CameraController::CameraDeviceSetting, std::shared_ptr<Ricoh::CameraController::CameraDeviceSetting>>(scope, "CameraDeviceSetting")
        .def("__repr__", [](Ricoh::CameraController::CameraDeviceSetting &self) {
            using namespace pybind11::literals;
            auto kwargs = pybind11::dict(
                "name"_a=self.getName(),
                "value"_a=self.getValue().toString()
            );
            return "<{name}:{value}>"_s.format(**kwargs);
        })
        .def("__eq__", &Ricoh::CameraController::CameraDeviceSetting::operator==)
        .def("__ne__", &Ricoh::CameraController::CameraDeviceSetting::operator!=)
        .def("getName", &Ricoh::CameraController::CameraDeviceSetting::getName, pybind11::return_value_policy::reference_internal)
        .def("getValue", &Ricoh::CameraController::CameraDeviceSetting::getValue, pybind11::return_value_policy::reference_internal)
        //.def("setValue", &Ricoh::CameraController::CameraDeviceSetting::setValue)
        .def("toString", &Ricoh::CameraController::CameraDeviceSetting::toString)
        ;
    pybind11::class_<Ricoh::CameraController::CameraDeviceSettingValue, std::shared_ptr<Ricoh::CameraController::CameraDeviceSettingValue>>(scope, "CameraDeviceSettingValue")
        .def("__repr__", [](Ricoh::CameraController::CameraDeviceSettingValue &self) {
            using namespace pybind11::literals;
            auto kwargs = pybind11::dict(
                "name"_a=self.toString()
            );
            return "<{name}>"_s.format(**kwargs);
        })
        .def("__eq__", &Ricoh::CameraController::CameraDeviceSettingValue::operator==)
        .def("__ne__", &Ricoh::CameraController::CameraDeviceSettingValue::operator!=)
        .def("toString", &Ricoh::CameraController::CameraDeviceSettingValue::toString)
        ;
}
