#ifndef _VARIANT_CUSTOM_TBEAM_1W_H_
#define _VARIANT_CUSTOM_TBEAM_1W_H_

// LoRa SX1262 Configuration 
#define USE_SX1262

// SPI Pins (Matches T-Beam 1W Markdown Table)
#define LORA_SCK    13  
#define LORA_MISO   12  
#define LORA_MOSI   11  
#define LORA_CS     15  

#define LORA_RESET  3   
#define LORA_DIO1   1   
#define LORA_BUSY   38  
#define LORA_DIO2   -1  
#define LORA_DIO3   -1  

// Critical Radio Power Settings
#define PIN_LORA_POWER 40
#define LORA_RXEN      21

// TCXO Voltage: 3.0V required as per the Lilygo doc. 
#define SX126X_DIO3_TCXO_VOLTAGE 3.0
#define SX126X_DIO2_AS_RF_SWITCH

// Library Mappings
#define SX126X_CS    LORA_CS
#define SX126X_DIO1  LORA_DIO1
#define SX126X_BUSY  LORA_BUSY
#define SX126X_RESET LORA_RESET

// --- Power Management (AXP2101) (I disabled this because it causes Critical fault 6) (seems to work either way) ---
//#define HAS_AXP2101


// FIX: Pin 4 is Battery ADC, not IRQ. Disable IRQ to force polling.
//#define PMU_IRQ         -1   

// --- Display (OLED) ---
#define USE_SH1106
#define I2C_SDA         8
#define I2C_SCL         9

// --- GPS (L76K) ---
//FIX: Swap RX and TX because of the notation
#define GPS_RX_PIN      5  
#define GPS_TX_PIN      6  

#define GPS_1PPS_PIN    7
#define GPS_WAKEUP_PIN  16

// --- SD Card (I don't think it has any use but it's a thing) ---
#define HAS_SDCARD
#define SDCARD_CS       10
#define SDCARD_MOSI     11
#define SDCARD_MISO     12 
#define SDCARD_SCK      13 

// --- Buttons & LED ---
#define BUTTON_PIN      0   
#define BUTTON_PIN_ALT  17  
#define LED_PIN         18  
#define LED_STATE_ON    1   

#endif
