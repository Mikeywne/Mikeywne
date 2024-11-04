/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

// Main Goal: To create an RGB LED system that can display various colors.
// Main Theme: RGB color mixing and control.

void setup() {
  // Start serial communication for debugging purposes.
  Serial.begin(9600);

  // Configure pins 3, 4, and 5 as output pins to control the LEDs.
  pinMode(3, OUTPUT); // Red LED
  pinMode(4, OUTPUT); // Green LED
  pinMode(5, OUTPUT); // Blue LED
}

void loop() {
  // You can use online color pickers or color codes to find desired RGB values.
  // Example: For a specific color like light blue:

  // Set the Red, Green, and Blue components (0-255)
  analogWrite(3, 100); // Red component
  analogWrite(4, 200); // Green component
  analogWrite(5, 255); // Blue component

  // You can change these values to create different colors.
}