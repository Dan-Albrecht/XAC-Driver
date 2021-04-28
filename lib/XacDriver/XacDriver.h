#pragma once
#include <stdint.h>
#include <Arduino.h>
#include "XacInput.h"

class XacDriver
{
private:
public:
    XacDriver();
    ~XacDriver();
    void PushButton(int16_t button);
    void PullTrigger(XacInput input, u_char ammount);
    void MoveJoystick(XacInput xInput, u_char xAmmount, XacInput yInput, u_char yAmmount);
    
    // Begins queueing all commands to be sent at the end call
    void BeginSimultaneousInput();

    // Sends everything we've accumulated
    void EndSimultaneousInput();
};
