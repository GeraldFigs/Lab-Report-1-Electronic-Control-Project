/* CODE: RGB colour is white when PB is not pressed. When pressed, it turns the RGB off.

Description: This program sets up an RGB LED respectively connected to pins 9,10, and 11 corresponding to the red, blue, and green cathodes.
Pin 12 is used as the input for a push button switch, which is set up with an internal pull-up resistor.
The logic sets the RGB light white when PB is not pressed, then it turns off whenever PB is pressed.
Serial communication is also initialized and printed with the state of PB. */

int red = 9; // declares an integer variable called "red" and initializes it to 9. The red cathod of RGB is connected to the pin 9.
int blue = 10; // declares an integer variable called "blue" and initializes it to 10. The red cathod of RGB is connected to the pin 10.
int green = 11; // declares an integer variable called "green" and initializes it to 11. The red cathod of RGB is connected to the pin 11.
int PB = 12;  //declares an integer variable called "PB" AND initializes it to 12. The PB is connected to pin 12, eventually with an internal pullup resistor.

void setup() { // void setup is the section of the program that runs once.
  
  pinMode(PB, INPUT_PULLUP);   // sets the pin number stored in the "PB" variable to be an input with a pull-up resistor. When the button is not pressed, the input is held HIGH by the resistor.
  pinMode(red, OUTPUT);       // sets the pin number stored in the "red" variable to be an output.
  pinMode(blue, OUTPUT);     // sets the pin number stored in the "blue" variable to be an output.
  pinMode(green, OUTPUT);   // sets the pin number stored in the "green" variable to be an output.
  Serial.begin(9600);      // initializes the serial communication at a baud rate of 9600.
}

void loop() { // Void loop is the section of the program that runs forever.
  
  int buttonState = digitalRead(PB); // reads the state of the "PB" (pin 2) and stores it in an int called "buttonState".
  Serial.println(buttonState);       // prints the value of the "buttonState" variable to the serial monitor.
  if (buttonState == !0) {          // since internal_pull up inverts the logic, it was inverted by using "!". If statement checks if the button is NOT pressed. then:
   
   //TURN THE RGB COLOR WHITE BY MAKING ALL PINS HIGH.
    analogWrite(red, 255);     // sends a PWM signal with a value of 255 to the pin number stored in the "red" variable, turning on the red LED.
    analogWrite(blue, 255);    // sends a PWM signal with a value of 255 to the pin number stored in the "blue" variable, turning on the blue LED.
    analogWrite(green, 255);   // sends a PWM signal with a value of 255 to the pin number stored in the "green" variable, turning on the green LED.
    // consequently, turning the red, blue, and green on simultaneously will have a white colour.
  
  } else { //otherwise (if button IS pressed), then...
  
  //TURN OFF EVERY PIN.
    analogWrite(red, 0);     // turns off the PWM signal by sending a value of 0 in pin number stored in the "red" variable, turning on the red LED.
    analogWrite(blue, 0);    // turns off the PWM signal by sending a value of 0 in pin number stored in the "blue" variable, turning on the blue LED.
    analogWrite(green, 0);   // turns off the PWM signal by sending a value of 0 in pin number stored in the "green" variable, turning on the green LED.
    // consequently, turning off the red, blue, and green on simultaneously will turn off the RGB LED.
  }
}