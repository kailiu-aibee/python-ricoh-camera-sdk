// generate by pypp
// original source code: ricoh_camera_sdk/response.hpp

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "ricoh_camera_sdk/capture.hpp"
#include "ricoh_camera_sdk/error.hpp"

#include "ricoh_camera_sdk/response.hpp"
// TODO: forward declaration class Capture
// TODO: forward declaration class Error





void init_ricoh_camera_sdk_response_hpp(pybind11::module scope) {
    pybind11::class_<Ricoh::CameraController::Response, std::shared_ptr<Ricoh::CameraController::Response>>(scope, "Response")
        .def(pybind11::init<Ricoh::CameraController::Result>())
        .def(pybind11::init<Ricoh::CameraController::Result, const std::shared_ptr<Ricoh::CameraController::Error> &>())
        .def("__repr__", [](Ricoh::CameraController::Response &self) {
            using namespace pybind11::literals;
            pybind11::list e;
            auto errors = self.getErrors();
            if ( errors.size() > 0 ) {
                for (const auto &err : errors) {
                    e.append(err->getMessage());
                }
            }
            auto kwargs = pybind11::dict(
                "Result"_a=pybind11::repr(pybind11::cast<>(self.getResult())),
                "Errors"_a=e
            );
            return "<Response:{Result} {Errors}>"_s.format(**kwargs);
        })
        .def("getResult", &Ricoh::CameraController::Response::getResult)
        .def("getErrors", &Ricoh::CameraController::Response::getErrors, pybind11::return_value_policy::reference_internal)
        .def("addError", &Ricoh::CameraController::Response::addError)
        ;
    pybind11::class_<Ricoh::CameraController::StartCaptureResponse, Ricoh::CameraController::Response, std::shared_ptr<Ricoh::CameraController::StartCaptureResponse>>(scope, "StartCaptureResponse")
        .def(pybind11::init<Ricoh::CameraController::Result>())
        .def(pybind11::init<Ricoh::CameraController::Result, const std::shared_ptr<Ricoh::CameraController::Error> &>())
        .def(pybind11::init<const std::shared_ptr<const Ricoh::CameraController::Capture> &>())
        .def("getCapture", &Ricoh::CameraController::StartCaptureResponse::getCapture)
        ;
    pybind11::enum_<Ricoh::CameraController::Result>(scope, "Result")
        .value("Ok", Ricoh::CameraController::Result::Ok)
        .value("Error", Ricoh::CameraController::Result::Error)
        ;
}
