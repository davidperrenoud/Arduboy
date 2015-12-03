#ifndef Arduboy_h
#define Arduboy_h

#include "ArduboyGraphics.h"

class Arduboy : public Print, public ArduboyGraphics
{
public:
  Arduboy();
  
  /// Draws an ASCII character at a point.
  void drawChar(int16_t x, int16_t y, unsigned char c, uint8_t color, uint8_t bg, uint8_t size);

  /// Sets the location of the screen cursor.
  void setCursor(int16_t x, int16_t y);

  /// Set text size
  /**
   * As mentioned in drawChar(), individual ASCII characters are 6x8 pixels
   * (5x7 with spacing on two edges). The size is a pixel multiplier,
   * so a size of 2 means each character will be 12x16, etc.
   */
  void setTextSize(uint8_t s);

  /// Sets whether text will wrap at screen edges.
  void setTextWrap(boolean w);

  /// Writes a single ASCII character to the screen.
  size_t write(uint8_t);
  
// Adafruit stuff
protected:
  int16_t cursor_x;
  int16_t cursor_y;
  uint8_t textsize;
  boolean wrap; // If set, 'wrap' text at right edge of display
};

#endif
