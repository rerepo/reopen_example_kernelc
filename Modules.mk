LOCAL_PATH := $(call my-dir)

###################### kernelc ######################
include $(CLEAR_VARS)

LOCAL_MODULE := kernelc

LOCAL_SRC_FILES :=
LOCAL_SRC_FILES += main.c
LOCAL_SRC_FILES += func.c

#LOCAL_C_INCLUDES := $(KERNEL_HEADERS)

include $(BUILD_EXECUTABLE)
