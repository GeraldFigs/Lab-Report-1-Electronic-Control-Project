/*this code blinks an on-board LED connected to digital pin 13 on an Arduino board with a delay of 500 milliseconds between on and off states, making it achieve a blinking effect.*/

int LED = 13; //initializes the on board built-in LED on the Arduino Board (this pin can also be used to light an external LED)
int delayVal = 500; //initialize to control the amount of time the LED stays ON or OFF.


void setup() {
  pinMode(LED, OUTPUT); // initializes the digital pin connected to the LED as an output pin
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED, 1);   // turns on the LED by setting the voltage of the digital pin connected to the LED to HIGH.
  delay(delayVal);           // causes the program to pause for the specified amount of time, in this case 500 milliseconds, before executing the next line.
  digitalWrite(LED, 0);   // turns off the LED by setting the voltage of the digital pin connected to the LED to LOW.
  delay(delayVal);           // auses the program to pause for the specified amount of time, in this case 500 milliseconds, before executing the next iteration of the loop.

}
