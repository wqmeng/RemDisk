
#ifndef __REMBUS_TYPES_H__
#define __REMBUS_TYPES_H__

#include <ntifs.h>
#include <wdf.h>
#include "remdisk-types.h"



typedef struct _REMBUS_PDO_DEVICE_CONTEXT{
	PREMBUS_DISK_INFORMATION DeviceInfo;
} REMBUS_PDO_DEVICE_CONTEXT, *PREMBUS_PDO_DEVICE_CONTEXT;

WDF_DECLARE_CONTEXT_TYPE_WITH_NAME(REMBUS_PDO_DEVICE_CONTEXT, GetPDODeviceContext)

typedef struct _REMBUS_PDO_QUEUE_CONTEXT {
	PREMBUS_DISK_INFORMATION DeviceInfo;
} REMBUS_PDO_QUEUE_CONTEXT, *PREMBUS_PDO_QUEUE_CONTEXT;

WDF_DECLARE_CONTEXT_TYPE_WITH_NAME(REMBUS_PDO_QUEUE_CONTEXT, GetPDOQueueContext)





#endif
