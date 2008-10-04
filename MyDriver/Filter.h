#pragma once
#define FILE_DEVICE_DRVFLTIP  0x00654322
#define DRVFLTIP_IOCTL_INDEX  0x830

#define CTL_CODE( DeviceType, Function, Method, Access ) (                 \
    ((DeviceType) << 16) | ((Access) << 14) | ((Function) << 2) | (Method) \
)
#define FILE_ANY_ACCESS                 0
#define METHOD_BUFFERED                 0

#define START_IP_HOOK CTL_CODE(FILE_DEVICE_DRVFLTIP, DRVFLTIP_IOCTL_INDEX,METHOD_BUFFERED, FILE_ANY_ACCESS)
#define STOP_IP_HOOK CTL_CODE(FILE_DEVICE_DRVFLTIP, DRVFLTIP_IOCTL_INDEX+1, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define ADD_FILTER CTL_CODE(FILE_DEVICE_DRVFLTIP, DRVFLTIP_IOCTL_INDEX+2, METHOD_BUFFERED, FILE_WRITE_ACCESS)
#define CLEAR_FILTER CTL_CODE(FILE_DEVICE_DRVFLTIP, DRVFLTIP_IOCTL_INDEX+3, METHOD_BUFFERED, FILE_ANY_ACCESS)