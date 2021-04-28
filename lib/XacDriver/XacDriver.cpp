#include "XacDriver.h"

XacDriver::XacDriver()
{
}

XacDriver::~XacDriver()
{
}

void XacDriver::PushButton(int16_t button)
{
    Serial.printf("Button press 0x%X\n", button);
}

void XacDriver::PullTrigger(XacInput input, u_char ammount)
{

}

void XacDriver::MoveJoystick(XacInput xInput, u_char xAmmount, XacInput yInput, u_char yAmmount)
{

}

void XacDriver::BeginSimultaneousInput()
{

}

void XacDriver::EndSimultaneousInput()
{
    // BUGBUG: Conflicting input. Last wins; send them all?
}
