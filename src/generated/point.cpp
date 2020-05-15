// generate by pypp
// original source code: ricoh_camera_sdk/point.hpp

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "ricoh_camera_sdk/point.hpp"





void init_ricoh_camera_sdk_point_hpp(pybind11::module scope) {
    pybind11::class_<Ricoh::CameraController::Point, std::shared_ptr<Ricoh::CameraController::Point>>(scope, "Point")
        .def_readwrite("x", &Ricoh::CameraController::Point::x)
        .def_readwrite("y", &Ricoh::CameraController::Point::y)
        ;
}
