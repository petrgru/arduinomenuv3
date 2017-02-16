#ifndef LCD3Wire_h
#define LCD3Wire_h

#include <inttypes.h>

class LCD3Wire {
public:
  LCD3Wire(int lcd_lines, int dat_pin, int str_pin, int clk_pin);
  void commandWrite(int value);
  void init();
  void print(int value);
  void printIn(char value[]);
  //non-core---------------
  void clear();
  void cursorTo(int line_num, int x);
  void leftScroll(int chars, int delay_time);
  //end of non-core--------

private:
  void _pushByte(int value, bool command);
  void _pushNibble(int nibble, bool command);
  void _pushOut(int value);
};

#endif
