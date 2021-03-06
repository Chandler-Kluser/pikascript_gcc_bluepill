/* ******************************** */
/* Warning! Don't modify this file! */
/* ******************************** */
#ifndef __PikaStdDevice_IIC__H
#define __PikaStdDevice_IIC__H
#include <stdio.h>
#include <stdlib.h>
#include "PikaObj.h"

PikaObj *New_PikaStdDevice_IIC(Args *args);

void PikaStdDevice_IIC___init__(PikaObj *self);
void PikaStdDevice_IIC_disable(PikaObj *self);
void PikaStdDevice_IIC_enable(PikaObj *self);
void PikaStdDevice_IIC_init(PikaObj *self);
void PikaStdDevice_IIC_platformDisable(PikaObj *self);
void PikaStdDevice_IIC_platformEnable(PikaObj *self);
void PikaStdDevice_IIC_platformRead(PikaObj *self);
void PikaStdDevice_IIC_platformWrite(PikaObj *self);
char* PikaStdDevice_IIC_read(PikaObj *self, int addr, int length);
void PikaStdDevice_IIC_setDeviceAddr(PikaObj *self, int addr);
void PikaStdDevice_IIC_setPinSCL(PikaObj *self, char* pin);
void PikaStdDevice_IIC_setPinSDA(PikaObj *self, char* pin);
void PikaStdDevice_IIC_write(PikaObj *self, int addr, char* data);

#endif
