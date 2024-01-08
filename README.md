# ArdTV
Creates a simpler way of using a screen (uses TVout) on Arduino.

REQIURES:
1. RCA cable and port

# How To Use
- Start off by calling the `ArdTV` class by `ArdTV --your call name--` and putting the `ArdTV.h` file in the same folder as your `.ino` file

Create Display:
- Use `.createDisplay()` function in setup()

Rendering Images:
- Use `.imageLoader(x, y, width, height, bitmap)` function in loop()
- Please add `//resolution` before the bitmap data (e.g., //resolution bitmap data)

Cursor:
- Use `.quickCursor()` function in loop(); preset location
- Use `.setCursor(x, y)` fucntion in loop(); customizable location

Refresh Rate/Delay:
- Use `.refreshRate(rate)` function at the end of loop()

Text:
- Use `.text(text)` function in loop()

Clear Screen:
- Use `.resetScreen()` function at the beginning of loop() 
