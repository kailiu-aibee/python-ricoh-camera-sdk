# RICOH Camera USB SDK for C++ Python bindings

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

## Usage

1. Get SDK (RicohCameraSDKCpp) from [api.ricoh](https://api.ricoh)
2. Extract it to the `sdk/` folder
3. Run `python setup.py build`

```python
$ LD_LIBRARY_PATH=path/to/sdk/lib python
>>> import ricoh_camera_sdk
>>> ricoh_camera_sdk.CameraDeviceDetector.detect(ricoh_camera_sdk.DeviceInterface.USB)
Device 0 (VID=25fb and PID=017f) is a Ricoh Imaging PENTAX KP.
[<ricoh_camera_sdk.CameraDevice object at 0x7f9217467110>]
```

### Connection

```python
>>> import ricoh_camera_sdk
>>> camera = ricoh_camera_sdk.CameraDeviceDetector.detect(ricoh_camera_sdk.DeviceInterface.USB)[0]
Device 0 (VID=25fb and PID=017f) is a Ricoh Imaging PENTAX KP.
>>> camera.connect(ricoh_camera_sdk.DeviceInterface.USB)
Device 0 (VID=25fb and PID=017f) is a Ricoh Imaging PENTAX KP.
<Response:Result.Ok []>
```

### Still Image Capture

```python
>>> camera.startCapture(False)
<Response:Result.Ok []>
```

### Capture Settings

```python
>>> iso = ricoh_camera_sdk.ISO()
>>> ss = ricoh_camera_sdk.ShutterSpeed()
>>> camera.getCaptureSettings([iso, ss])
<Response:Result.Ok []>
>>> iso.getAvailableSettings()
[<ISO:100>, <ISO:200>, <ISO:400>, <ISO:800>, <ISO:1600>, <ISO:3200>, <ISO:6400>, <ISO:12800>, <ISO:25600>, <ISO:51200>, <ISO:102400>, <ISO:204800>, <ISO:409600>, <ISO:819200>]
>>> ss.getAvailableSettings()
[<ShutterSpeed:30>, <ShutterSpeed:25>, <ShutterSpeed:20>, <ShutterSpeed:15>, <ShutterSpeed:13>, <ShutterSpeed:10>, <ShutterSpeed:8>, <ShutterSpeed:6>, <ShutterSpeed:5>, <ShutterSpeed:4>, <ShutterSpeed:3>, <ShutterSpeed:2.5>, <ShutterSpeed:2>, <ShutterSpeed:1.6>, <ShutterSpeed:1.3>, <ShutterSpeed:1>, <ShutterSpeed:0.8>, <ShutterSpeed:0.6>, <ShutterSpeed:0.5>, <ShutterSpeed:0.4>, <ShutterSpeed:0.3>, <ShutterSpeed:1/4>, <ShutterSpeed:1/5>, <ShutterSpeed:1/6>, <ShutterSpeed:1/8>, <ShutterSpeed:1/10>, <ShutterSpeed:1/13>, <ShutterSpeed:1/15>, <ShutterSpeed:1/20>, <ShutterSpeed:1/25>, <ShutterSpeed:1/30>, <ShutterSpeed:1/40>, <ShutterSpeed:1/50>, <ShutterSpeed:1/60>, <ShutterSpeed:1/80>, <ShutterSpeed:1/100>, <ShutterSpeed:1/125>, <ShutterSpeed:1/160>, <ShutterSpeed:1/200>, <ShutterSpeed:1/250>, <ShutterSpeed:1/320>, <ShutterSpeed:1/400>, <ShutterSpeed:1/500>, <ShutterSpeed:1/640>, <ShutterSpeed:1/800>, <ShutterSpeed:1/1000>, <ShutterSpeed:1/1250>, <ShutterSpeed:1/1600>, <ShutterSpeed:1/2000>, <ShutterSpeed:1/2500>, <ShutterSpeed:1/3200>, <ShutterSpeed:1/4000>, <ShutterSpeed:1/5000>, <ShutterSpeed:1/6000>]
>>> camera.setCaptureSettings([ricoh_camera_sdk.ISO.ISO800, ricoh_camera_sdk.ShutterSpeed.SS1_100])
<Response:Result.Ok []>
```

## License

This python bindings is released under the MIT License.

Please get the RicohCameraSDK on your own.
