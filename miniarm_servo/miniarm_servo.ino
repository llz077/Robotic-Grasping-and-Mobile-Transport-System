#include <Servo.h> // import servo library

Servo servos[5]; // create servo variables

const static uint8_t servoPins[5] = { 7, 6, 5, 4, 3}; // define servo pins

void setup() { // put your setup code here, to run once:

  for (int i = 0; i < 5; ++i) {
    // attach the servo variables to the respective servo pins
    servos[i].attach(servoPins[i],500,2500);
  }
  delay(2000); // wait 2 seconds for the setup

}

void loop() { // put your main code here, to run repeatedly:

  for (int i = 0; i < 5; ++i) {
    // tell each servo to go to 135 degree
    servos[i].write(135);
    delay(1000);
  }
  for (int i = 0; i < 5; ++i) {
    // tell each servo to go to 90 degree
    servos[i].write(90);
    delay(1000);
  }

}

