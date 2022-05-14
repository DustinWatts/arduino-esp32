#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define USB_VID 0x303D
#define USB_PID 0x1001
#define USB_MANUFACTURER "Dustin Watts"
#define USB_PRODUCT "ESP32 TouchDown S3"

#define EXTERNAL_NUM_INTERRUPTS 0
#define NUM_DIGITAL_PINS        0
#define NUM_ANALOG_INPUTS       0

// UART
static const uint8_t TX = 43;
static const uint8_t RX = 44;

// I2C
static const uint8_t SDA = 17;
static const uint8_t SCL = 18;

// SPI
static const uint8_t MOSI  = 4;
static const uint8_t SDO   = 4;
static const uint8_t MISO  = 15;
static const uint8_t SDI   = 15;
static const uint8_t SCK   = 2;
static const uint8_t SS    = 38;


// Voltages
#define BAT_VOLTS     2 // VBAT (100K/100K divider)

// JTAG Header
#define MTCK         39
#define MTDO         40
#define MTDI         41
#define MTMS         42

#endif /* Pins_Arduino_h */
