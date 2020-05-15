// generate by pypp
// original source code: ricoh_camera_sdk/camera_storage.hpp

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "ricoh_camera_sdk/camera_image_list.hpp"

#include "ricoh_camera_sdk/camera_storage.hpp"
// TODO: forward declaration class CameraImageList





void init_ricoh_camera_sdk_camera_storage_hpp(pybind11::module scope) {
    pybind11::class_<Ricoh::CameraController::CameraStorage, std::shared_ptr<Ricoh::CameraController::CameraStorage>>(scope, "CameraStorage")
        .def("getId", &Ricoh::CameraController::CameraStorage::getId, pybind11::return_value_policy::reference_internal)
        .def("isAvailable", &Ricoh::CameraController::CameraStorage::isAvailable)
        .def("getType", &Ricoh::CameraController::CameraStorage::getType)
        .def("getPermission", &Ricoh::CameraController::CameraStorage::getPermission)
        .def("getMaxCapacity", &Ricoh::CameraController::CameraStorage::getMaxCapacity)
        .def("getFreeSpace", &Ricoh::CameraController::CameraStorage::getFreeSpace)
        .def("getRemainingPictures", &Ricoh::CameraController::CameraStorage::getRemainingPictures)
        .def("getListImagesState", &Ricoh::CameraController::CameraStorage::getListImagesState)
        .def("getImages", &Ricoh::CameraController::CameraStorage::getImages, pybind11::return_value_policy::reference_internal)
        ;
    pybind11::enum_<Ricoh::CameraController::StorageType>(scope, "StorageType")
        .value("Unknown", Ricoh::CameraController::StorageType::Unknown)
        .value("FixedROM", Ricoh::CameraController::StorageType::FixedROM)
        .value("RemovableROM", Ricoh::CameraController::StorageType::RemovableROM)
        .value("FixedRAM", Ricoh::CameraController::StorageType::FixedRAM)
        .value("RemovableRAM", Ricoh::CameraController::StorageType::RemovableRAM)
        ;
    pybind11::enum_<Ricoh::CameraController::StoragePermission>(scope, "StoragePermission")
        .value("Unknown", Ricoh::CameraController::StoragePermission::Unknown)
        .value("ReadWrite", Ricoh::CameraController::StoragePermission::ReadWrite)
        .value("Read", Ricoh::CameraController::StoragePermission::Read)
        .value("ReadDelete", Ricoh::CameraController::StoragePermission::ReadDelete)
        ;
    pybind11::enum_<Ricoh::CameraController::StorageListImagesState>(scope, "StorageListImagesState")
        .value("NotListed", Ricoh::CameraController::StorageListImagesState::NotListed)
        .value("Listing", Ricoh::CameraController::StorageListImagesState::Listing)
        .value("Pending", Ricoh::CameraController::StorageListImagesState::Pending)
        .value("Listed", Ricoh::CameraController::StorageListImagesState::Listed)
        .value("Interrupted", Ricoh::CameraController::StorageListImagesState::Interrupted)
        ;
}
