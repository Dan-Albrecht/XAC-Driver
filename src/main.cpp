#include <XacDriver.h>
#include "PinAssignment.h"

void setup() {
  XacDriver driver;

  driver.PushButton(BUTTON_D_UP);
  driver.PushButton(BUTTON_D_UP);
  driver.PushButton(BUTTON_D_DOWN);
  driver.PushButton(BUTTON_D_DOWN);
  driver.PushButton(BUTTON_D_LEFT);
  driver.PushButton(BUTTON_D_RIGHT);
  driver.PushButton(BUTTON_D_LEFT);
  driver.PushButton(BUTTON_D_RIGHT);
  driver.PushButton(BUTTON_B);
  driver.PushButton(BUTTON_A);
  
  driver.PullTrigger(XacInput::A, 100);

  driver.BeginSimultaneousInput();
  driver.PushButton(BUTTON_D_DOWN);
  driver.PushButton(BUTTON_Y);
  driver.EndSimultaneousInput();
}

void loop() {
}
