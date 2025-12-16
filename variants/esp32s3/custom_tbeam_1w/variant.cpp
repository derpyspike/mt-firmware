#include "Arduino.h"
#include "variant.h"
// This part was vibecoded by Gemini 3 Pro (seems to work though)


// This function is called by the Arduino framework very early,
// before setup() and before the SPI bus initializes.
/*extern "C" void initVariant() {
    // 1. Power on the Radio Regulator (LDO)
    // The T-Beam 1W requires IO40 High to provide power to the SX1262.
    pinMode(PIN_LORA_POWER, OUTPUT);
    digitalWrite(PIN_LORA_POWER, HIGH);

    // 2. Silence the SD Card
    // The SD Card and Radio share the SPI bus. We must pull the SD Card CS (IO10) 
    // HIGH (inactive) so it doesn't corrupt the bus while the Radio initializes.
    pinMode(SDCARD_CS, OUTPUT);
    digitalWrite(SDCARD_CS, HIGH); 

    // 3. Ensure Radio CS is also inactive (High) initially
    pinMode(LORA_CS, OUTPUT);
    digitalWrite(LORA_CS, HIGH);

    // 4. Give the LDO time to stabilize (20ms is usually enough)
    delay(20);
}
    */
