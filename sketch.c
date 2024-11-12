#include <Stepper.h>

const int StepsPerRevolution = 64; // For Elegoo Stepper Motor
const int Speed = 60;  // RPM
const int Delay = 500; // Milliseconds

// Create myStepper object
Stepper myStepper = Stepper(StepsPerRevolution, 8, 9, 10, 11);

void setup() {
    // set the speed at 60 rpm:
    myStepper.setSpeed(Speed);
}

void loop() {
 // step one revolution  in one direction:
  myStepper.step(StepsPerRevolution); // Positve = Clockwise
  delay(Delay);

  // step one revolution in the other direction:
  myStepper.step(-StepsPerRevolution); // Negative = CounterClockwise
  delay(Delay);
}