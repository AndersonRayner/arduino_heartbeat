#include "heartBeat.h"

HEARTBEAT::HEARTBEAT(uint8_t pin) :
  _pin(pin)
  {
      
  }
  
void HEARTBEAT::init(void)
{
    pinMode(_pin,OUTPUT);
    update();
}
  
void HEARTBEAT::update(void)
{
  if (millis() - heartBeatTimer > (uint32_t)heartBeatArray[heartBeatIndex]) {
    // Trigger a heartbeat signal
    heartBeatIndex++;
    heartBeatTimer = millis();
    LEDS_state = !LEDS_state;
    digitalWrite(_pin, LEDS_state);

    // Reset the index back to zero if at the end
    if (heartBeatIndex > sizeof(heartBeatArray) / 2 - 1) {
      heartBeatIndex = 0;
    }
  }
}

void HEARTBEAT::invert_level(void)
{
    LEDS_state = !LEDS_state;
}