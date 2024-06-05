#include <Arduino.h>
#include "pwm_gen.h"

void setup()
{
  init_mcpwm();
  start_gen();
}

void loop()
{
  delay(5000);
  set_mf(555);
}
