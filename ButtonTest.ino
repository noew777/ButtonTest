#include "Button.h"

Button b(12);

void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  if (b.isPressed()) {
    digitalWrite(13,HIGH);
  }
  else {
    digitalWrite(13, LOW);
  }
}
