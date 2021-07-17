#ifndef __I2C_H_
#define __I2C_H_

#include <reg51.h>

sbit SCL=P2^1;
sbit SDA=P2^0;

void RACK();
void NO_ACK();
void Delay10us();
void I2cStart();
void I2cStop();
unsigned char I2cSendByte(unsigned char dat);
unsigned char I2cReadByte();
void write_resistor(unsigned char value);
unsigned char read_resistor(void);

#endif
