LOCAL_PATH := $(call my-dir)


# Sensor protobuf parsing exports
include $(CLEAR_VARS)
IGNORED_WARNINGS := -Wno-sign-compare -Wno-unused-parameter -Wno-sign-promo -Wno-error=return-type
LOCAL_CFLAGS     := -O2 -DGOOGLE_PROTOBUF_NO_RTTI
LOCAL_C_INCLUDES := \
				bionic \
				external/stlport/stlport \
				external/protobuf/src

LOCAL_SRC_FILES := sensors_packet.proto
LOCAL_SHARED_LIBRARIES := liblog libcutils libstlport
LOCAL_STATIC_LIBRARIES := libprotobuf-cpp-2.3.0-full
LOCAL_MODULE := libcppsensors_packet
include $(BUILD_SHARED_LIBRARY)


# Protobuf parsing exports (static)
include $(CLEAR_VARS)
IGNORED_WARNINGS := -Wno-sign-compare -Wno-unused-parameter -Wno-sign-promo -Wno-error=return-type
LOCAL_CFLAGS     := -O2 -DGOOGLE_PROTOBUF_NO_RTTI
LOCAL_STATIC_LIBRARIES := liblog libcutils libstlport_static libprotobuf-cpp-2.3.0-full
LOCAL_C_INCLUDES := \
					bionic \
					external/stlport/stlport \
					external/protobuf/src

LOCAL_SRC_FILES := sensors_packet.proto
LOCAL_MODULE := libcppsensors_packet_static
LOCAL_MODULE_TAGS := optional
include $(BUILD_STATIC_LIBRARY)
