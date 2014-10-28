#ifndef _AIC_H_
#define _AIC_H_

#ifndef LOG_TAG

#define LOG_TAG "Aicd"
#endif

#include <cutils/log.h>

#define NB_ELEM 128
#define LIBSENSOR_PORT (22471)
#define LIBSENSOR_IP   "127.0.0.1"

// Property keys naming convention
#define KEY_PREFIX            "aicd."

// Cache values: For example, aicd.battery.value.cache refers
// to real battery value has AOSP would see in manual mode
#define CACHE_SUFFIX          ".cached"

// Properties keys

#define MANUAL_MODE           "manual"
#define AUTO_MODE             "auto"

#define ANDROID_VERSION       "ro.build.version.release"
#define AIC "ro.aic.version"

// BATTERY
#define BATTERY_MODE          KEY_PREFIX "battery.mode"
#define BATTERY_FULL          KEY_PREFIX "battery.full"
#define BATTERY_LEVEL         KEY_PREFIX "battery.level"
#define BATTERY_STATUS        KEY_PREFIX "battery.status"
#define BATTERY_LOADTYPE      KEY_PREFIX "battery.load_type"
#define AC_ONLINE             KEY_PREFIX "ac.online"

// GPS
#define GPS_STATUS            KEY_PREFIX "gps.status"
#define GPS_LATITUDE          KEY_PREFIX "gps.latitude"
#define GPS_LONGITUDE         KEY_PREFIX "gps.longitude"
#define GPS_ALTITUDE          KEY_PREFIX "gps.altitude"
#define GPS_ACCURACY          KEY_PREFIX "gps.accuracy"
#define GPS_BEARING           KEY_PREFIX "gps.bearing"

//FROM AiC LIBSENSOR
/// ACCELEROMETER
#define ACCELEROMETER_X       KEY_PREFIX "accelerometer.x"
#define ACCELEROMETER_Y       KEY_PREFIX "accelerometer.y"
#define ACCELEROMETER_Z       KEY_PREFIX "accelerometer.z"

/// MAGNETOMETER
#define MAGNETOMETER_X       KEY_PREFIX "magnetometer.x"
#define MAGNETOMETER_Y       KEY_PREFIX "magnetometer.y"
#define MAGNETOMETER_Z       KEY_PREFIX "magnetometer.z"

/// GYROSCOPE
#define GYROSCOPE_AZIMUTH    KEY_PREFIX "gyroscope.azimuth"
#define GYROSCOPE_PITCH      KEY_PREFIX "gyroscope.pitch"
#define GYROSCOPE_ROLL       KEY_PREFIX "gyroscope.roll"

/// ORIENTATION
#define ORIENTATION_AZIMUTH  KEY_PREFIX "orientation.azimuth"
#define ORIENTATION_PITCH    KEY_PREFIX "orientation.pitch"
#define ORIENTATION_ROLL     KEY_PREFIX "orientation.roll"

/// GRAVITY
#define GRAVITY_X            KEY_PREFIX "gravity.x"
#define GRAVITY_Y            KEY_PREFIX "gravity.y"
#define GRAVITY_Z            KEY_PREFIX "gravity.z"

/// LINEARACC
#define LINEAR_ACC_X            KEY_PREFIX "linearacc.x"
#define LINEAR_ACC_Y            KEY_PREFIX "linearacc.y"
#define LINEAR_ACC_Z            KEY_PREFIX "linearacc.z"

//// THERMOMETER
#define TEMPERATURE          KEY_PREFIX "thermometer.temperature"

//// TELEMETER
#define DISTANCE             KEY_PREFIX "telemeter.distance"

//// LUXMETER
#define LIGHT                KEY_PREFIX "luxmeter.light"

//// BAROMETER
#define PRESSURE             KEY_PREFIX "barometer.pressure"

//// HYGROMETER
#define HUMIDITY             KEY_PREFIX "hygrometer.humidity"

/// GPS
#define GPS_DISABLED          "disabled"
#define GPS_ENABLED           "enabled"
#define GPS_DEFAULT_STATUS    GPS_DISABLED
#define GPS_DEFAULT_ACCURACY  "1"

// CAPABILITIES
#define CAPABILITY_PREFIX        "ro.aicd.caps."
#define CAPABILITY_BATTERY       CAPABILITY_PREFIX "bat"
#define CAPABILITY_GPS           CAPABILITY_PREFIX "gps"
#define CAPABILITY_ACCELEROMETER CAPABILITY_PREFIX "acc"
#define CAPABILITY_MAGNETOMETER  CAPABILITY_PREFIX "magneto"
#define CAPABILITY_THERMOMETER   CAPABILITY_PREFIX "thermo"
#define CAPABILITY_TELEMETER     CAPABILITY_PREFIX "tele"
#define CAPABILITY_LUXMETER      CAPABILITY_PREFIX "lux"
#define CAPABILITY_BAROMETER     CAPABILITY_PREFIX "bar"
#define CAPABILITY_HYGROMETER    CAPABILITY_PREFIX "hygro"

#define CAPABILITY_ORIENTATION   CAPABILITY_PREFIX "orientation"
#define CAPABILITY_GYROSCOPE     CAPABILITY_PREFIX "gyro"
#define CAPABILITY_GRAVITY       CAPABILITY_PREFIX "gravity"
#define CAPABILITY_LINEARACC     CAPABILITY_PREFIX "linearacc"
#define CAPABILITY_ROTVECTOR     CAPABILITY_PREFIX "rotvector"

#define CAPABILITY_CAMERA        CAPABILITY_PREFIX "cam"
#define CAPABILITY_SCREENCAST    CAPABILITY_PREFIX "scr"
#define CAPABILITY_REMOTECTL     CAPABILITY_PREFIX "rmt"
#define CAPABILITY_DEVICEID      CAPABILITY_PREFIX "did"

// DEVICE IDs
#define DEVICE_ID                KEY_PREFIX "device.id"

#endif
