// generate by pypp
// original source code: ricoh_camera_sdk/camera_device.hpp

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "ricoh_camera_sdk/camera_device_setting.hpp"
#include "ricoh_camera_sdk/camera_image_list.hpp"
#include "ricoh_camera_sdk/camera_storage_list.hpp"
#include "ricoh_camera_sdk/capture_setting.hpp"
#include "ricoh_camera_sdk/response.hpp"
#include "ricoh_camera_sdk/camera_event_listener.hpp"

#include "ricoh_camera_sdk/camera_device.hpp"
// TODO: forward declaration class Response
// TODO: forward declaration class StartCaptureResponse
// TODO: forward declaration class CameraStorageList
// TODO: forward declaration class CameraImageList
// TODO: forward declaration class CameraEventListener
// TODO: forward declaration class CameraDeviceSetting
// TODO: forward declaration class CaptureSetting





void init_ricoh_camera_sdk_camera_device_hpp(pybind11::module scope) {
    pybind11::class_<Ricoh::CameraController::CameraDevice, std::shared_ptr<Ricoh::CameraController::CameraDevice>>(scope, "CameraDevice")
        .def("__eq__", &Ricoh::CameraController::CameraDevice::operator==)
        .def("__ne__", &Ricoh::CameraController::CameraDevice::operator!=)
        .def("connect", &Ricoh::CameraController::CameraDevice::connect)
        .def("disconnect", &Ricoh::CameraController::CameraDevice::disconnect)
        .def("isConnected", &Ricoh::CameraController::CameraDevice::isConnected)
        .def("getManufacturer", &Ricoh::CameraController::CameraDevice::getManufacturer, pybind11::return_value_policy::reference_internal)
        .def("getModel", &Ricoh::CameraController::CameraDevice::getModel, pybind11::return_value_policy::reference_internal)
        .def("getFirmwareVersion", &Ricoh::CameraController::CameraDevice::getFirmwareVersion, pybind11::return_value_policy::reference_internal)
        .def("getSerialNumber", &Ricoh::CameraController::CameraDevice::getSerialNumber, pybind11::return_value_policy::reference_internal)
        .def("getStatus", &Ricoh::CameraController::CameraDevice::getStatus, pybind11::return_value_policy::reference_internal)
        .def("getStorages", &Ricoh::CameraController::CameraDevice::getStorages, pybind11::return_value_policy::reference_internal)
        .def("getImages", &Ricoh::CameraController::CameraDevice::getImages, pybind11::return_value_policy::reference_internal)
        .def("addEventListener", &Ricoh::CameraController::CameraDevice::addEventListener)
        .def("removeEventListener", &Ricoh::CameraController::CameraDevice::removeEventListener)
        .def("getEventListeners", &Ricoh::CameraController::CameraDevice::getEventListeners, pybind11::return_value_policy::reference_internal)
        .def("focus", static_cast<Ricoh::CameraController::Response(Ricoh::CameraController::CameraDevice::*)()>(&Ricoh::CameraController::CameraDevice::focus))
        .def("focus", static_cast<Ricoh::CameraController::Response(Ricoh::CameraController::CameraDevice::*)(const Ricoh::CameraController::Point &)>(&Ricoh::CameraController::CameraDevice::focus))
        .def("focus", static_cast<Ricoh::CameraController::Response(Ricoh::CameraController::CameraDevice::*)(int)>(&Ricoh::CameraController::CameraDevice::focus))
        .def("startCapture", static_cast<Ricoh::CameraController::StartCaptureResponse(Ricoh::CameraController::CameraDevice::*)(bool)>(&Ricoh::CameraController::CameraDevice::startCapture))
        .def("startCapture", static_cast<Ricoh::CameraController::StartCaptureResponse(Ricoh::CameraController::CameraDevice::*)(const Ricoh::CameraController::Point &)>(&Ricoh::CameraController::CameraDevice::startCapture))
        .def("stopCapture", &Ricoh::CameraController::CameraDevice::stopCapture)
        .def("startLiveView", &Ricoh::CameraController::CameraDevice::startLiveView)
        .def("stopLiveView", &Ricoh::CameraController::CameraDevice::stopLiveView)
        .def("getCameraDeviceSettings", &Ricoh::CameraController::CameraDevice::getCameraDeviceSettings)
        .def("getCameraDeviceSettings", [](Ricoh::CameraController::CameraDevice &self, const pybind11::list &list) {
            std::vector<Ricoh::CameraController::CameraDeviceSetting *> settings;
            for (const auto &obj : list) {
                settings.push_back(obj.cast<Ricoh::CameraController::CameraDeviceSetting *>());
            }
            return self.getCameraDeviceSettings(settings);
        })
        .def("setCameraDeviceSettings", &Ricoh::CameraController::CameraDevice::setCameraDeviceSettings)
        .def("setCameraDeviceSettings", [](Ricoh::CameraController::CameraDevice &self, const pybind11::list &list) {
            std::vector<const Ricoh::CameraController::CameraDeviceSetting *> settings;
            for (const auto &obj : list) {
                settings.push_back(obj.cast<const Ricoh::CameraController::CameraDeviceSetting *>());
            }
            return self.setCameraDeviceSettings(settings);
        })
        .def("getCaptureSettings", &Ricoh::CameraController::CameraDevice::getCaptureSettings)
        .def("getCaptureSettings", [](Ricoh::CameraController::CameraDevice &self, const pybind11::list &list) {
            std::vector<Ricoh::CameraController::CaptureSetting *> settings;
            for (const auto &obj : list) {
                settings.push_back(obj.cast<Ricoh::CameraController::CaptureSetting *>());
            }
            return self.getCaptureSettings(settings);
        })
        .def("setCaptureSettings", &Ricoh::CameraController::CameraDevice::setCaptureSettings)
        .def("setCaptureSettings", [](Ricoh::CameraController::CameraDevice &self, const pybind11::list &list) {
            std::vector<const Ricoh::CameraController::CaptureSetting *> settings;
            for (const auto &obj : list) {
                settings.push_back(obj.cast<const Ricoh::CameraController::CaptureSetting *>());
            }
            return self.setCaptureSettings(settings);
        })
        ;
    pybind11::enum_<Ricoh::CameraController::DeviceInterface>(scope, "DeviceInterface")
        .value("USB", Ricoh::CameraController::DeviceInterface::USB)
        ;
}
