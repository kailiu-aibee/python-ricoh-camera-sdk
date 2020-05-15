#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

extern void init_ricoh_camera_sdk_camera_device_detector_hpp(pybind11::module scope);
extern void init_ricoh_camera_sdk_camera_device_setting_hpp(pybind11::module scope);
extern void init_ricoh_camera_sdk_camera_device_hpp(pybind11::module scope);
extern void init_ricoh_camera_sdk_camera_event_listener_hpp(pybind11::module scope);
extern void init_ricoh_camera_sdk_camera_image_list_hpp(pybind11::module scope);
extern void init_ricoh_camera_sdk_camera_image_hpp(pybind11::module scope);
extern void init_ricoh_camera_sdk_camera_status_hpp(pybind11::module scope);
extern void init_ricoh_camera_sdk_camera_storage_list_hpp(pybind11::module scope);
extern void init_ricoh_camera_sdk_camera_storage_hpp(pybind11::module scope);
extern void init_ricoh_camera_sdk_camera_time_hpp(pybind11::module scope);
extern void init_ricoh_camera_sdk_capture_method_hpp(pybind11::module scope);
extern void init_ricoh_camera_sdk_capture_setting_hpp(pybind11::module scope);
extern void init_ricoh_camera_sdk_capture_hpp(pybind11::module scope);
extern void init_ricoh_camera_sdk_error_hpp(pybind11::module scope);
extern void init_ricoh_camera_sdk_exposure_compensation_hpp(pybind11::module scope);
extern void init_ricoh_camera_sdk_exposure_program_hpp(pybind11::module scope);
extern void init_ricoh_camera_sdk_f_number_hpp(pybind11::module scope);
extern void init_ricoh_camera_sdk_hyper_operation_enable_hpp(pybind11::module scope);
extern void init_ricoh_camera_sdk_iso_hpp(pybind11::module scope);
extern void init_ricoh_camera_sdk_live_view_specification_hpp(pybind11::module scope);
extern void init_ricoh_camera_sdk_point_hpp(pybind11::module scope);
extern void init_ricoh_camera_sdk_response_hpp(pybind11::module scope);
extern void init_ricoh_camera_sdk_shutter_speed_hpp(pybind11::module scope);
extern void init_ricoh_camera_sdk_still_image_capture_format_hpp(pybind11::module scope);
extern void init_ricoh_camera_sdk_still_image_quality_hpp(pybind11::module scope);
extern void init_ricoh_camera_sdk_storage_writing_hpp(pybind11::module scope);
extern void init_ricoh_camera_sdk_user_capture_settings_mode_hpp(pybind11::module scope);
extern void init_ricoh_camera_sdk_white_balance_hpp(pybind11::module scope);


PYBIND11_MODULE(ricoh_camera_sdk, module) {
  init_ricoh_camera_sdk_camera_device_detector_hpp(module);
  init_ricoh_camera_sdk_camera_device_setting_hpp(module);
  init_ricoh_camera_sdk_camera_device_hpp(module);
  init_ricoh_camera_sdk_camera_event_listener_hpp(module);
  init_ricoh_camera_sdk_camera_image_list_hpp(module);
  init_ricoh_camera_sdk_camera_image_hpp(module);
  init_ricoh_camera_sdk_camera_status_hpp(module);
  init_ricoh_camera_sdk_camera_storage_list_hpp(module);
  init_ricoh_camera_sdk_camera_storage_hpp(module);

  init_ricoh_camera_sdk_capture_setting_hpp(module);

  init_ricoh_camera_sdk_camera_time_hpp(module);
  init_ricoh_camera_sdk_capture_method_hpp(module);
  init_ricoh_camera_sdk_capture_hpp(module);
  init_ricoh_camera_sdk_error_hpp(module);
  init_ricoh_camera_sdk_exposure_compensation_hpp(module);
  init_ricoh_camera_sdk_exposure_program_hpp(module);
  init_ricoh_camera_sdk_f_number_hpp(module);
  init_ricoh_camera_sdk_hyper_operation_enable_hpp(module);
  init_ricoh_camera_sdk_iso_hpp(module);
  init_ricoh_camera_sdk_live_view_specification_hpp(module);
  init_ricoh_camera_sdk_point_hpp(module);
  init_ricoh_camera_sdk_response_hpp(module);
  init_ricoh_camera_sdk_shutter_speed_hpp(module);
  init_ricoh_camera_sdk_still_image_capture_format_hpp(module);
  init_ricoh_camera_sdk_still_image_quality_hpp(module);
  init_ricoh_camera_sdk_storage_writing_hpp(module);
  init_ricoh_camera_sdk_user_capture_settings_mode_hpp(module);
  init_ricoh_camera_sdk_white_balance_hpp(module);
}
