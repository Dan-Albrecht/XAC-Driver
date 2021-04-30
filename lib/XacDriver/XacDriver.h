#pragma once
#include <Arduino.h>
#include "XacInput.h"

class XacDriver
{
private:
public:
    XacDriver();
    ~XacDriver();
    void PushButton(XacButton button);
    void PullTrigger(XacAxis input, uint8_t ammount);
    void MoveJoystick(XacAxis xInput, uint8_t xAmmount, XacAxis yInput, uint8_t yAmmount);
    
    // Begins queueing all commands to be sent at the end call
    void BeginSimultaneousInput();

    // Sends everything we've accumulated
    void EndSimultaneousInput();
};
