// kind of from http://lxr.free-electrons.com/source/drivers/leds/trigger/ledtrig-heartbeat.c?v=3.10

#include <Arduino.h>   // required before wiring_private.h

class HEARTBEAT {
    public :
    HEARTBEAT(uint8_t pin);
    
    void init();
    void update();
    void invert_level();
    
    private :
    const uint16_t heartBeatArray [4] = { 70, 245, 70, 1015 };
    uint8_t heartBeatIndex = 0;
    uint32_t heartBeatTimer = 0;
    bool LEDS_state = HIGH;
    uint8_t _pin;
};


