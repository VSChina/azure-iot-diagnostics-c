#ifndef __IOTHUB_CLIENT_DIAG_H_
#define __IOTHUB_CLIENT_DIAG_H_

#include "iothub_client.h"

typedef enum {
	SAMPLING_NONE, SAMPLING_CLIENT, SAMPLING_SERVER
} SAMPLING_RATE_SOURCE;

IOTHUB_CLIENT_RESULT IoTHubClient_LL_SetDeviceTwinCallback_WithDiagnostics(IOTHUB_CLIENT_LL_HANDLE iotHubClientHandle, IOTHUB_CLIENT_DEVICE_TWIN_CALLBACK iotHubUserdeviceTwinCallback, void* userContextCallback);

IOTHUB_CLIENT_LL_HANDLE IoTHubClient_LL_CreateFromConnectionString_WithDiagnostics(SAMPLING_RATE_SOURCE samplingSource, int clientSamplingPercentage, const char* deviceConnectionString, IOTHUB_CLIENT_TRANSPORT_PROVIDER protocol);

IOTHUB_CLIENT_RESULT IoTHubClient_LL_SendEventAsync_WithDiagnostics(IOTHUB_CLIENT_LL_HANDLE iotHubClientHandle, IOTHUB_MESSAGE_HANDLE eventMessageHandle, IOTHUB_CLIENT_EVENT_CONFIRMATION_CALLBACK eventConfirmationCallback, void* userContextCallback);

#endif /*__IOTHUB_CLIENT_DIAG_H_*/

