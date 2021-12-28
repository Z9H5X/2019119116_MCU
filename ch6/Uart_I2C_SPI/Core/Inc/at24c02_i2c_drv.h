#ifndef EEPROM_IIC
#define EEPROM_IIC

#include "i2c.h"

#define	AT24C02_ADDR_WRITE	0xA2
#define	AT24C02_ADDR_READ	  0xA3

uint8_t At24c02_Write_Byte(uint16_t addr, uint8_t* dat);
uint8_t At24c02_Read_Byte(uint16_t addr, uint8_t* read_buf);
uint8_t At24c02_Write_Amount_Byte(uint16_t addr, uint8_t* dat, uint16_t size);
uint8_t At24c02_Read_Amount_Byte(uint16_t addr, uint8_t* recv_buf, uint16_t size);

#endif /* EEPROM_IIC */
