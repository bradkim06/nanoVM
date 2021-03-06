//
// config.h
//
// NanoVM configuration file for the Asuro
//

#ifndef CONFIG_H
#define CONFIG_H

// cpu related setup
#define VERSION "1.0"

#define ATMEGA32
#define CTBOT                  // compiles some special code e.g. in uart.c
#define CLOCK 16000000
#define F_CPU CLOCK

// uart setup
#define UART_BITRATE 2400
#define UART_BUFFER_BITS 5     // 32 bytes buffer (min. req for loader)

#define CODESIZE 8192          // maximum java program size
#define HEAPSIZE 1024          // only 1204 to use 8 bit heap entries...


// use flash to store java program
#define NVM_USE_FLASH_PROGRAM

// avr specific native init routines
#define NATIVE_INIT  native_init()

#define NVM_INITIALIZE_ALLOCATED // fill new class instances with zero

// vm setup
#undef NVM_USE_STACK_CHECK       // enable check if method returns empty stack
#define NVM_USE_ARRAY            // enable arrays
#define NVM_USE_TABLESWITCH      // support switch instruction
#define NVM_USE_LOOKUPSWITCH     // support switch instruction
#define NVM_USE_INHERITANCE      // support for inheritance
#define NVM_USE_32BIT_WORD
#define NVM_USE_FLOAT
#define NVM_USE_EXTSTACKOPS      // enable extended dup opcodes

// native setup
#define NVM_USE_MATH             // enable native math functions
#define NVM_USE_STDIO            // enable native stdio support
#define NVM_USE_FORMATTER        // enable native formatter class

// marker used to indicate, that this item is stored in eeprom
#define NVMFILE_FLAG     0x8000

#endif // CONFIG_H
