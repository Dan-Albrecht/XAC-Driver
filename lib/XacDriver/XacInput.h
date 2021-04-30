#pragma once

// Binary pushed / not pushed
enum class XacButton
{
    A,
    B,
    X,
    Y,
    Select,             // Whatever they're calling the button on the left these days
    Start,              // And whatever is on the right now
    LeftStickClick,
    RightStickClick,
    Nexus,              // The glowing Xbox button
    LeftBumper,
    RightBumper,
    DpadLeft,
    DpadRight,
    DpadUp,
    DpadDown,
};

// Variable 0 - X input
enum class XacAxis
{
    LeftTrigger,
    RightTrigger,
    LeftStickX,
    LeftStickY,
    RightStickX,
    RightStickY,
};
