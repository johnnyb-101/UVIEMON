#ifndef ADDRESS_MAP_H
#define ADDRESS_MAP_H

#include <stdint.h>

#define LEON3 0
#define LEON4 1
#define SUPPORTED_CPUS 2

#define SDRAM_START_ADDRESS 0
#define UART0_START_ADDRESS 1
#define DSU 2
#define WAKE_STATE 3
#define DEFINED_ADDRESSES 4

const uint32_t ADDRESSES[SUPPORTED_CPUS][DEFINED_ADDRESSES] = {
	{ 0x40000000, 0x80000100, 0x90000000, 0x80000210 },
	{ 0x40000000, 0xFF900000, 0xE0000000, 0xFF904010 }
};

#endif
