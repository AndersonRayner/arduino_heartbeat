// Demo program for the heartBeat class.  
// Matt 2017

#include <heartBeat.h>

HEARTBEAT heartBeat(13);

void setup() {
  heartBeat.init();

}

void loop() {
  heartBeat.update();

}
