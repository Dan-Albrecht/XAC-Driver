#include <XacDriver.h>
#include "PinAssignment.h"

void setup() {
  XacDriver driver;

  driver.PushButton(XacButton::DpadUp);
  driver.PushButton(XacButton::DpadUp);
  driver.PushButton(XacButton::DpadDown);
  driver.PushButton(XacButton::DpadDown);
  driver.PushButton(XacButton::DpadLeft);
  driver.PushButton(XacButton::DpadRight);
  driver.PushButton(XacButton::DpadLeft);
  driver.PushButton(XacButton::DpadRight);
  driver.PushButton(XacButton::B);
  driver.PushButton(XacButton::A);
  
  driver.PullTrigger(XacAxis::LeftTrigger, 100);

  driver.BeginSimultaneousInput();
  driver.PushButton(XacButton::DpadDown);
  driver.PushButton(XacButton::Y);
  driver.EndSimultaneousInput();
}

void loop() {
}
