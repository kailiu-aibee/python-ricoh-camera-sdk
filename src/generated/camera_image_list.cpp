// generate by pypp
// original source code: ricoh_camera_sdk/camera_image_list.hpp

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "ricoh_camera_sdk/camera_image.hpp"

#include "ricoh_camera_sdk/camera_image_list.hpp"
// TODO: forward declaration class CameraImage





void init_ricoh_camera_sdk_camera_image_list_hpp(pybind11::module scope) {
    pybind11::class_<Ricoh::CameraController::CameraImageList, std::shared_ptr<Ricoh::CameraController::CameraImageList>>(scope, "CameraImageList")
        .def("get", &Ricoh::CameraController::CameraImageList::get)
        .def("size", &Ricoh::CameraController::CameraImageList::size)
        .def("clone", &Ricoh::CameraController::CameraImageList::clone)
        ;
}
