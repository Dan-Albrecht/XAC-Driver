#include "XacDriver.h"
#include "..\..\include\PinAssignment.h"

XacDriver::XacDriver()
{
}

XacDriver::~XacDriver()
{
}

void XacDriver::PushButton(XacButton button)
{
    Serial.printf("Button press 0x%X\n", button);
}

void XacDriver::PullTrigger(XacAxis input, uint8_t ammount)
{
    u_char pin = PinAssignment::MapToPin(input);
    if (pin < 0)
    {
        return;
    }

    if(ammount > 100)
    {
        ammount=100;
    }

    // Dumb now, just all or nothing
    if (ammount > 0)
    {
        // ammount *= 2.5;
        //dacWrite(pin, ammount);
        digitalWrite(pin, 1);
    }
    else
    {
        digitalWrite(pin, 0);
    }
}

void XacDriver::MoveJoystick(XacAxis xInput, uint8_t xAmmount, XacAxis yInput, uint8_t yAmmount)
{
}

void XacDriver::BeginSimultaneousInput()
{
}

void XacDriver::EndSimultaneousInput()
{
    // BUGBUG: Conflicting input. Last wins; send them all?
}
