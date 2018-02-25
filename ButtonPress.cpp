#include "ButtonPress.h"

#include <Arduino.h>

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

