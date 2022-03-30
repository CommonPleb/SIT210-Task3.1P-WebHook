#include <BH1750Lib.h>


BH1750Lib bh1750;
void setup() {
    bh1750.begin(BH1750LIB_MODE_CONTINUOUSHIGHRES);
}

void loop() {
    Particle.publish("light", String(bh1750.lightLevel()), PRIVATE);
    delay(10000);
}
