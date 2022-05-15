#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define USB_VID 0x303a
#define USB_PID 0x1001

#define USB_MANUFACTURER "Dustin Watts"
#define USB_PRODUCT "ESP32 TouchDown S3"
#define USB_SERIAL ""

#define EXTERNAL_NUM_INTERRUPTS 46
#define NUM_DIGITAL_PINS        48
#define NUM_ANALOG_INPUTS       20

#define analogInputToDigitalPin(p)  (((p)<20)?(analogChannelToDigitalPin(p)):-1)
#define digitalPinToInterrupt(p)    (((p)<48)?(p):-1)
#define digitalPinHasPWM(p)         (p < 46)

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

// Speaker Pin
static const uint8_t SPEAKER_PIN = 47;

// JTAG Header
#define MTCK         39
#define MTDO         40
#define MTDI         41
#define MTMS         42

#endif /* Pins_Arduino_h */
