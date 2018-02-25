#ifndef BUTTON_PRESS_H
#define BUTTON_PRESS_H

#include <Arduino.h>

class ButtonPress {
 public:
  void begin(int pin);
  int isPressed();
  
 private:
  int _pin;
};

#endif