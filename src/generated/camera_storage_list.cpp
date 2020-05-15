// generate by pypp
// original source code: ricoh_camera_sdk/camera_storage_list.hpp

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "ricoh_camera_sdk/camera_storage.hpp"

#include "ricoh_camera_sdk/camera_storage_list.hpp"
// TODO: forward declaration class CameraStorage





void init_ricoh_camera_sdk_camera_storage_list_hpp(pybind11::module scope) {
    pybind11::class_<Ricoh::CameraController::CameraStorageList, std::shared_ptr<Ricoh::CameraController::CameraStorageList>>(scope, "CameraStorageList")
        .def("get", &Ricoh::CameraController::CameraStorageList::get)
        .def("size", &Ricoh::CameraController::CameraStorageList::size)
        ;
}
