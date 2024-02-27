#include "ir-sensor.h"
#include "gpio-interrupt.h"
#include "trace.h"
#include "main.h"

static void IrSensor_InterruptCallback(GpioInterruptTrigger trigger) {
    TRACE_DEBUG("In IrSensor Callback. Edge : %d, Pin : %d", trigger.edgeDetect, trigger.pinNumber);
    return;
}

Error IrSensor_Initialize()
{

    GpioInterruptContext interruptContext;
    interruptContext.callback = IrSensor_InterruptCallback;
    interruptContext.trigger.edgeDetect = GpioEdgeDetect_RisingFalling;
    interruptContext.trigger.pinNumber = IR_SENSOR_RX_Pin;

    Error error = GpioInterrupt_RegisterCallback(&interruptContext);
    if (error) {
        return error;
    }
    return Error_None;
}

Error IrSensor_Update()
{
    return Error_None;
}

Error IrSensor_Terminate()
{
    return Error_None;
}
