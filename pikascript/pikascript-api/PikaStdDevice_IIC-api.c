/* ******************************** */
/* Warning! Don't modify this file! */
/* ******************************** */
#include "PikaStdDevice_IIC.h"
#include "TinyObj.h"
#include <stdio.h>
#include <stdlib.h>
#include "BaseObj.h"

void PikaStdDevice_IIC___init__Method(PikaObj *self, Args *args){
    PikaStdDevice_IIC___init__(self);
}

void PikaStdDevice_IIC_disableMethod(PikaObj *self, Args *args){
    PikaStdDevice_IIC_disable(self);
}

void PikaStdDevice_IIC_enableMethod(PikaObj *self, Args *args){
    PikaStdDevice_IIC_enable(self);
}

void PikaStdDevice_IIC_initMethod(PikaObj *self, Args *args){
    PikaStdDevice_IIC_init(self);
}

void PikaStdDevice_IIC_platformDisableMethod(PikaObj *self, Args *args){
    PikaStdDevice_IIC_platformDisable(self);
}

void PikaStdDevice_IIC_platformEnableMethod(PikaObj *self, Args *args){
    PikaStdDevice_IIC_platformEnable(self);
}

void PikaStdDevice_IIC_platformReadMethod(PikaObj *self, Args *args){
    PikaStdDevice_IIC_platformRead(self);
}

void PikaStdDevice_IIC_platformWriteMethod(PikaObj *self, Args *args){
    PikaStdDevice_IIC_platformWrite(self);
}

void PikaStdDevice_IIC_readMethod(PikaObj *self, Args *args){
    int addr = args_getInt(args, "addr");
    int length = args_getInt(args, "length");
    char* res = PikaStdDevice_IIC_read(self, addr, length);
    method_returnStr(args, res);
}

void PikaStdDevice_IIC_setDeviceAddrMethod(PikaObj *self, Args *args){
    int addr = args_getInt(args, "addr");
    PikaStdDevice_IIC_setDeviceAddr(self, addr);
}

void PikaStdDevice_IIC_setPinSCLMethod(PikaObj *self, Args *args){
    char* pin = args_getStr(args, "pin");
    PikaStdDevice_IIC_setPinSCL(self, pin);
}

void PikaStdDevice_IIC_setPinSDAMethod(PikaObj *self, Args *args){
    char* pin = args_getStr(args, "pin");
    PikaStdDevice_IIC_setPinSDA(self, pin);
}

void PikaStdDevice_IIC_writeMethod(PikaObj *self, Args *args){
    int addr = args_getInt(args, "addr");
    char* data = args_getStr(args, "data");
    PikaStdDevice_IIC_write(self, addr, data);
}

PikaObj *New_PikaStdDevice_IIC(Args *args){
    PikaObj *self = New_TinyObj(args);
    class_defineMethod(self, "__init__()", PikaStdDevice_IIC___init__Method);
    class_defineMethod(self, "disable()", PikaStdDevice_IIC_disableMethod);
    class_defineMethod(self, "enable()", PikaStdDevice_IIC_enableMethod);
    class_defineMethod(self, "init()", PikaStdDevice_IIC_initMethod);
    class_defineMethod(self, "platformDisable()", PikaStdDevice_IIC_platformDisableMethod);
    class_defineMethod(self, "platformEnable()", PikaStdDevice_IIC_platformEnableMethod);
    class_defineMethod(self, "platformRead()", PikaStdDevice_IIC_platformReadMethod);
    class_defineMethod(self, "platformWrite()", PikaStdDevice_IIC_platformWriteMethod);
    class_defineMethod(self, "read(addr:int,length:int)->str", PikaStdDevice_IIC_readMethod);
    class_defineMethod(self, "setDeviceAddr(addr:int)", PikaStdDevice_IIC_setDeviceAddrMethod);
    class_defineMethod(self, "setPinSCL(pin:str)", PikaStdDevice_IIC_setPinSCLMethod);
    class_defineMethod(self, "setPinSDA(pin:str)", PikaStdDevice_IIC_setPinSDAMethod);
    class_defineMethod(self, "write(addr:int,data:str)", PikaStdDevice_IIC_writeMethod);
    return self;
}

Arg *PikaStdDevice_IIC(PikaObj *self){
    return obj_newObjInPackage(New_PikaStdDevice_IIC);
}
