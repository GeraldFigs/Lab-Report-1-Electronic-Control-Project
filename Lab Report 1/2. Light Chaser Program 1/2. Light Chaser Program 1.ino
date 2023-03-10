/*This code blinks four LEDs connected to digital pins 8, 9, 10, and 11 of an Arduino board. 
The time delay between each blink is set to 50 milliseconds, which is stored in a variable declared "delayVal".
In the setup function, the four digital pins are initialized as outputs.
In the loop function, the LED connected to digital pin 8 is turned on, 
then the program pauses for the delayVal amount of time using the delay function.
Then the LED is turned off, and the same process is repeated for the LEDs connected to digital pins 9, 10, and 11.
Thus, achieving a Chasing LED lights effect in a uniform direction */

int delayVal = 50  ;                        //store the time delay (in milliseconds) between each LED blink. It is set to 50 milliseconds.

void setup() {
  pinMode(8, OUTPUT);                         // initialize digital pin 8 as an output pin. This is where the first LED is connected
  pinMode(9, OUTPUT);                         // initialize digital pin 9 as an output pin. This is where the second LED is connected
  pinMode(10, OUTPUT);                        // initialize digital pin 10 as an output pin. This is where the third LED is connected
  pinMode(11, OUTPUT);                        // initialize digital pin 11 as an output pin. This is where the fourth LED is connected
}


// the loop function runs over and over again forever
void loop() {
  digitalWrite(8, HIGH);                       // first LED on (digital HIGH voltage level)
  delay(delayVal);                             // pauses the program for the amount of time specified by delayVal (50 ms in this case).
  digitalWrite(8, LOW);                        // first LED off by making the voltage LOW level
  digitalWrite(9, HIGH);                       // second LED on (digital HIGH voltage level) 
  delay(delayVal);                             // pauses the program for the amount of time specified by delayVal (50 ms in this case).
  digitalWrite(9, LOW);                        // second LED off by making the voltage LOW level
  digitalWrite(10, HIGH);                      // third LED on (digital HIGH voltage level)
  delay(delayVal);                             // pauses the program for the amount of time specified by delayVal (50 ms in this case).
  digitalWrite(10, LOW);                       // third LED off by making the voltage LOW level.
  digitalWrite(11, HIGH);                      // fourth LED on (digital HIGH voltage level)
  delay(delayVal);                             // pauses the program for the amount of time specified by delayVal (50 ms in this case).
  digitalWrite(11, LOW);                       // fourth LED off by making the voltage LOW level

}
