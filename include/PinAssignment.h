#pragma once
#include <stdint.h>
#include <XacInput.h>

class PinAssignment
{
private:
    PinAssignment() {}

public:
    // Maps a button to an assigned pin. Returns -1 if unmapped.
    static u_char MapToPin(XacButton button)
    {
        switch (button)
        {
        case XacButton::A:
            return -1;
            break;

        default:
            return -1;
            break;
        }
    }

    // Maps an axis to an assigned pin. Returns -1 if unmapped.
    static u_char MapToPin(XacAxis axis)
    {
        switch (axis)
        {
        case XacAxis::LeftStickX:
            return -1;
            break;

        default:
            return -1;
            break;
        }
    }
};
