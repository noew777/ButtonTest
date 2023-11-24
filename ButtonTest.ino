#include "Button.h"

Button botonRojo(7);

void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  if (botonRojo.isPressed()) {
    digitalWrite(13,HIGH);
  }
  else {
    digitalWrite(13,LOW);
  }
}
