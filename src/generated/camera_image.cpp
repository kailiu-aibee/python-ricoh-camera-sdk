// generate by pypp
// original source code: ricoh_camera_sdk/camera_image.hpp

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include <sstream>

#include "ricoh_camera_sdk/response.hpp"
#include "ricoh_camera_sdk/camera_storage.hpp"

#include "ricoh_camera_sdk/camera_image.hpp"
// TODO: forward declaration class Response
// TODO: forward declaration class CameraStorage





void init_ricoh_camera_sdk_camera_image_hpp(pybind11::module scope) {
    pybind11::class_<Ricoh::CameraController::CameraImage, std::shared_ptr<Ricoh::CameraController::CameraImage>>(scope, "CameraImage")
        .def("getId", &Ricoh::CameraController::CameraImage::getId, pybind11::return_value_policy::reference_internal)
        .def("getName", &Ricoh::CameraController::CameraImage::getName, pybind11::return_value_policy::reference_internal)
        .def("getSize", &Ricoh::CameraController::CameraImage::getSize)
        .def("getType", &Ricoh::CameraController::CameraImage::getType)
        .def("getFormat", &Ricoh::CameraController::CameraImage::getFormat)
        .def("hasThumbnail", &Ricoh::CameraController::CameraImage::hasThumbnail)
        .def("getDateTime", &Ricoh::CameraController::CameraImage::getDateTime)
        .def("isExist", &Ricoh::CameraController::CameraImage::isExist)
        .def("getStorage", &Ricoh::CameraController::CameraImage::getStorage)
        //.def("getData", &Ricoh::CameraController::CameraImage::getData)
        .def("getData", [](Ricoh::CameraController::CameraImage &self) {
            std::ostringstream oss;
            auto ret = self.getData(oss);
            return std::make_tuple(ret, pybind11::bytes(oss.str()));
        })
        //.def("getThumbnail", &Ricoh::CameraController::CameraImage::getThumbnail)
        .def("getThumbnail", [](Ricoh::CameraController::CameraImage &self) {
            std::ostringstream oss;
            auto ret = self.getThumbnail(oss);
            return std::make_tuple(ret, pybind11::bytes(oss.str()));
        })
        .def("deleteData", &Ricoh::CameraController::CameraImage::deleteData)
        ;
    pybind11::enum_<Ricoh::CameraController::ImageType>(scope, "ImageType")
        .value("Unknown", Ricoh::CameraController::ImageType::Unknown)
        .value("StillImage", Ricoh::CameraController::ImageType::StillImage)
        .value("Movie", Ricoh::CameraController::ImageType::Movie)
        ;
    pybind11::enum_<Ricoh::CameraController::ImageFormat>(scope, "ImageFormat")
        .value("Unknown", Ricoh::CameraController::ImageFormat::Unknown)
        .value("JPEG", Ricoh::CameraController::ImageFormat::JPEG)
        .value("TIFF", Ricoh::CameraController::ImageFormat::TIFF)
        .value("DPOF", Ricoh::CameraController::ImageFormat::DPOF)
        .value("PEF", Ricoh::CameraController::ImageFormat::PEF)
        .value("DNG", Ricoh::CameraController::ImageFormat::DNG)
        .value("MP4", Ricoh::CameraController::ImageFormat::MP4)
        .value("MOV", Ricoh::CameraController::ImageFormat::MOV)
        .value("AVI", Ricoh::CameraController::ImageFormat::AVI)
        ;
}
