# Heartbeat Library for Arduino
A simple library that blinks an LED in a heartbeat pattern to help show a program is running

## Usage
Follow the example in `examples/`, but basically
- Include the header `<heartBeat.h>` and create an object `HEARTBEAT heartBeat(LED_PIN)`
- Make sure to put `heartBeat.init()` in `void setup()`
- Call `heartBeat.update()` at the end of `void loop()`
