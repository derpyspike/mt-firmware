#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define USB_VID 0x303a
#define USB_PID 0x1001

// UART
static const uint8_t TX = 43;
static const uint8_t RX = 44;

// I2C
static const uint8_t SDA = 8;
static const uint8_t SCL = 9;

// SPI 
static const uint8_t SS = 15;   
static const uint8_t MOSI = 11;
static const uint8_t MISO = 12; // Docs say 12
static const uint8_t SCK = 13;  // Docs say 13

#define SPI_MOSI MOSI
#define SPI_MISO MISO
#define SPI_SCK  SCK
#define SPI_CS   10    // SD Card Chip Select

#endif /* Pins_Arduino_h */
