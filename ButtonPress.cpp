#include "ButtonPress.h"

#include <Arduino.h>

// ButtonPress::ButtonPress(int pin) {
//   pinMode(pin, INPUT);
//   this->_pin = pin;
// }

// ButtonPress::ButtonPress() {
//   this->_pin = 13;
//   pinMode(_pin, INPUT);
// }

void ButtonPress::begin(int pin) {
  this->_pin = pin;
  pinMode(this->_pin, INPUT);
}

int ButtonPress::isPressed() {
  int buttonState = digitalRead(this->_pin);

  if (buttonState == HIGH) {
    return 0;
  }
  else {
    return 1;
  }
}

