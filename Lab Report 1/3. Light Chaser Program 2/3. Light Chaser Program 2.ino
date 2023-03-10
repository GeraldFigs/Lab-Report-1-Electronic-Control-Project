/*This code blinks four LEDs respectively connected to digital pins 8-11 of an Arduino board.
The delay value is set to 50ms so that a fast blinking effect can be observed.
The LEDs turn on and off one by one in a sequential manner with a delay of 50ms between each LED blink.
When the sequence reaches the fourth LED, it goes back to third, and second LEDs, instead of going back straight to the first LED.
Then, the sequence repeats in a loop.*/


int delayVal  = 50  ;                        //delay vaue is set to very low ms so that it will have the blinking effect.

void setup() {
  pinMode(8, OUTPUT);                         // initializes digital pin 8 as an output pin. This is where the first LED is connected.
  pinMode(9, OUTPUT);                         // initializes digital pin 9 as an output pin. This is where the second LED is connected.
  pinMode(10, OUTPUT);                        // initializes digital pin 10 as an output pin. This is where the third LED is connected.
  pinMode(11, OUTPUT);                        // initializes digital pin 11 as an output pin. This is where the fourth LED is connected.
}


// the loop function runs over and over again forever
void loop() {
  digitalWrite(8, HIGH);                       // first LED on (digital HIGH voltage level)
  delay(delayVal);                             // pauses the program for the amount of time specified by int "delayVal" (50ms in this case).
  digitalWrite(8, LOW);                        // first LED off by making the voltage LOW
  digitalWrite(9, HIGH);                       // second LED on (digital HIGH is the voltage level) 
  delay(delayVal);                             // pauses the program for the amount of time specified by int "delayVal" (50ms in this case).
  digitalWrite(9, LOW);                        // second LED off by making the voltage LOW 
  digitalWrite(10, HIGH);                      // third LED on (digital HIGH is the voltage level)
  delay(delayVal);                             // pauses the program for the amount of time specified by int "delayVal" (50ms in this case).
  digitalWrite(10, LOW);                       // third LED off by making the voltage LOW 
  digitalWrite(11, HIGH);                      // fourth LED on (digital HIGH is the voltage level) 
  delay(delayVal);                             // pauses the program for the amount of time specified by int "delayVal" (50ms in this case). 
  digitalWrite(11, LOW);                       // fourth LED off by making the voltage LOW
  digitalWrite(10, HIGH);                      // third LED on (digital HIGH is the voltage level)
  delay(delayVal);                             // pauses the program for the amount of time specified by int "delayVal" (50ms in this case). 
  digitalWrite(10, LOW);                       // third LED off by making the voltage LOW
  digitalWrite(9, HIGH);                       // second LED on (digital HIGH is the voltage level) 
  delay(delayVal);                             // pauses the program for the amount of time specified by int "delayVal" (50ms in this case). 
  digitalWrite(9, LOW);                        // second LED off by making the voltage LOW

}
