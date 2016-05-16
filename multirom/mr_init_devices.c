#include <stdlib.h>

// These are paths to folders in /sys which contain "uevent" file
// need to init this device.
// MultiROM needs to init framebuffer, mmc blocks, input devices,
// some ADB-related stuff and USB drives, if OTG is supported
// You can use * at the end to init this folder and all its subfolders
const char *mr_init_devices[] =
{
	"/sys/class/graphics/fb0",
	
	"/sys/block/mmcblk0",
	"/sys/devices/msm_sdcc.1",
	"/sys/devices/msm_sdcc.1/mmc_host/mmc0",
	"/sys/devices/msm_sdcc.1/mmc_host/mmc0/mmc0:0001",
	"/sys/devices/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0",
	"/sys/devices/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0*",
	"/sys/bus/mmc",
	"/sys/bus/mmc/drivers/mmcblk",
	"/sys/module/mmc_core",
	"/sys/module/mmcblk",
	
	"/sys/devices/gpio_keys.83/input*",
	"/sys/devices/virtual/input*",
	"/sys/devices/virtual/misc/uinput",
	"/sys/devices/f9924000.i2c/i2c-2/2-0020/input*",
	
	// USB drive
	"/sys/bus/platform/drivers/xhci-hcd*",
	
	// for adb
	"/sys/devices/virtual/tty/ptmx",
	"/sys/devices/virtual/misc/android_adb",
	"/sys/devices/virtual/android_usb/android0/f_adb",
	"/sys/bus/usb",
	
	// for qualcomm overlay - /dev/ion
	"/sys/devices/virtual/misc/ion",
	
	// Encryption
	"/sys/devices/virtual/misc/device-mapper",
	"/sys/devices/virtual/qseecom/qseecom",

	NULL
};
