// generate by pypp
// original source code: ricoh_camera_sdk/camera_event_listener.hpp

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "ricoh_camera_sdk/camera_device.hpp"
#include "ricoh_camera_sdk/camera_image.hpp"
#include "ricoh_camera_sdk/capture_setting.hpp"
#include "ricoh_camera_sdk/capture.hpp"

#include "ricoh_camera_sdk/camera_event_listener.hpp"
// TODO: forward declaration class CameraDevice
// TODO: forward declaration class CameraImage
// TODO: forward declaration class Capture
// TODO: forward declaration class CaptureSetting




class PyCameraEventListener :
    public Ricoh::CameraController::CameraEventListener
{
public:
    using Ricoh::CameraController::CameraEventListener::CameraEventListener;
    void imageAdded (const std::shared_ptr<const Ricoh::CameraController::CameraDevice> & sender, const std::shared_ptr<const Ricoh::CameraController::CameraImage> & image) override {
        PYBIND11_OVERLOAD(void, CameraEventListener, imageAdded, sender, image);
    }
    void imageStored (const std::shared_ptr<const Ricoh::CameraController::CameraDevice> & sender, const std::shared_ptr<const Ricoh::CameraController::CameraImage> & image) override {
        PYBIND11_OVERLOAD(void, CameraEventListener, imageStored, sender, image);
    }
    void captureComplete (const std::shared_ptr<const Ricoh::CameraController::CameraDevice> & sender, const std::shared_ptr<const Ricoh::CameraController::Capture> & capture) override {
        PYBIND11_OVERLOAD(void, CameraEventListener, captureComplete, sender, capture);
    }
    void deviceDisconnected (const std::shared_ptr<const Ricoh::CameraController::CameraDevice> & sender, Ricoh::CameraController::DeviceInterface inf) override {
        PYBIND11_OVERLOAD(void, CameraEventListener, deviceDisconnected, sender, inf);
    }
    void liveViewFrameUpdated (const std::shared_ptr<const Ricoh::CameraController::CameraDevice> & sender, const std::shared_ptr<const unsigned char> & liveViewFrame, unsigned long frameSize) override {
        pybind11::gil_scoped_acquire gil;
        pybind11::function overload = pybind11::get_overload(this, "liveViewFrameUpdated");
        if ( ! overload ) {
            return;
        }
        // livewViewFrame should be `std::shared_ptr<const unsigned char[]>`
        //auto bytes = pybind11::bytes(reinterpret_cast<const char *>(&liveViewFrame[0]), frameSize);
        auto bytes = pybind11::bytes(reinterpret_cast<const char *>(liveViewFrame.get()), frameSize);
        overload(sender, bytes);
    }
    void captureSettingsChanged (const std::shared_ptr<const Ricoh::CameraController::CameraDevice> & sender, const std::vector<std::shared_ptr<const Ricoh::CameraController::CaptureSetting>> & newSettings) override {
        PYBIND11_OVERLOAD(void, CameraEventListener, captureSettingsChanged, sender, newSettings);
    }
};

void init_ricoh_camera_sdk_camera_event_listener_hpp(pybind11::module scope) {
    pybind11::class_<Ricoh::CameraController::CameraEventListener, PyCameraEventListener, std::shared_ptr<Ricoh::CameraController::CameraEventListener>>(scope, "CameraEventListener")
        .def(pybind11::init<>([]() {
            return std::make_shared<PyCameraEventListener>();
        }))
        //.def("operator=", &Ricoh::CameraController::CameraEventListener::operator=, pybind11::return_value_policy::reference)
        .def("imageAdded", &Ricoh::CameraController::CameraEventListener::imageAdded)
        .def("imageStored", &Ricoh::CameraController::CameraEventListener::imageStored)
        .def("captureComplete", &Ricoh::CameraController::CameraEventListener::captureComplete)
        .def("deviceDisconnected", &Ricoh::CameraController::CameraEventListener::deviceDisconnected)
        //.def("liveViewFrameUpdated", &Ricoh::CameraController::CameraEventListener::liveViewFrameUpdated)
        .def("liveViewFrameUpdated", [](Ricoh::CameraController::CameraEventListener &self, const std::shared_ptr<const Ricoh::CameraController::CameraDevice> &sender, const std::string &liveViewFrame) {})
        .def("captureSettingsChanged", &Ricoh::CameraController::CameraEventListener::captureSettingsChanged)
        ;
}
