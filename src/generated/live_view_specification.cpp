// generate by pypp
// original source code: ricoh_camera_sdk/live_view_specification.hpp

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "ricoh_camera_sdk/live_view_specification.hpp"





void init_ricoh_camera_sdk_live_view_specification_hpp(pybind11::module scope) {
    pybind11::class_<Ricoh::CameraController::LiveViewImage, std::shared_ptr<Ricoh::CameraController::LiveViewImage>>(scope, "LiveViewImage")
        .def_readwrite("width", &Ricoh::CameraController::LiveViewImage::width)
        .def_readwrite("height", &Ricoh::CameraController::LiveViewImage::height)
        .def_readwrite("focusArea", &Ricoh::CameraController::LiveViewImage::focusArea)
        ;
    pybind11::class_<Ricoh::CameraController::LiveViewSpecification, Ricoh::CameraController::CameraDeviceSetting, std::shared_ptr<Ricoh::CameraController::LiveViewSpecification>>(scope, "LiveViewSpecification")
        .def(pybind11::init<>())
        ;
    pybind11::class_<Ricoh::CameraController::LiveViewSpecificationValue, Ricoh::CameraController::CameraDeviceSettingValue, std::shared_ptr<Ricoh::CameraController::LiveViewSpecificationValue>>(scope, "LiveViewSpecificationValue")
        .def(pybind11::init<const Ricoh::CameraController::LiveViewImage &>())
        .def("__eq__", &Ricoh::CameraController::LiveViewSpecificationValue::operator==)
        .def("__ne__", &Ricoh::CameraController::LiveViewSpecificationValue::operator!=)
        .def("get", &Ricoh::CameraController::LiveViewSpecificationValue::get, pybind11::return_value_policy::reference_internal)
        .def("toString", &Ricoh::CameraController::LiveViewSpecificationValue::toString)
        ;
}
