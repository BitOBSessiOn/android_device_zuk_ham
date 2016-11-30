#
# Copyright 2012 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

# Sample: This is where we'd set a backup provider if we had one
# $(call inherit-product, device/sample/products/backup_overlay.mk)

# Get the prebuilt list of APNs
#$(call inherit-product, vendor/bliss/config/gsm.mk)

# Inherit from the common Open Source product configuration
$(call inherit-product, $(SRC_TARGET_DIR)/product/aosp_base_telephony.mk)

# Inherit from our custom product configuration
$(call inherit-product, vendor/bliss/config/common.mk)

# Disabled if NO prebuilt kernel
#PRODUCT_COPY_FILES += \
#    device/zuk/ham/kernel:kernel

PRODUCT_NAME := bliss_ham
PRODUCT_DEVICE := ham
PRODUCT_BRAND := zuk
PRODUCT_MODEL := Z1
PRODUCT_MANUFACTURER := Zuk
TARGET_VENDOR_DEVICE_NAME := Z1
PRODUCT_BUILD_PROP_OVERRIDES += TARGET_DEVICE=Z1 PRODUCT_NAME=ham
