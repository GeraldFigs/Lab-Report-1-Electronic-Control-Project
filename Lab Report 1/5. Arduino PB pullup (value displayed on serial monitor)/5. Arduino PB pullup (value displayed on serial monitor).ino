/*CODE: PB WITH EXTERNAL PULL UP RESISTOR AND BUTTON STATE PRINTED VIA SERIAL MONITOR

Description: This program reads the state of a pushbutton switch with an external pullup resistor connected to digital pin 2 (PB),
and sends the state information (0 or 1) to the serial monitor via the Serial communication.
The code first initializes the PB pin as an input and sets up the serial communication.
Then in the loop, the program reads the digital value of PB using the digitalRead() function and stores it in the variable buttonState.
The program then prints out the value of buttonState using the combined Serial.print() and Serial.println() functions to display the state of the button on the serial monitor.
This allows the user to see whether the pushbutton is being pressed or not.

IMPORTANT NOTE: it is normal to see the printed serial value of 1 being when PB is not pressed and 0 when PB is pressed as the pullup resistor inverts the logic of the circuit. */ 

int PB = 12;   //create an integer variable called "PB" and set its value to 2. This is the pin number of the push button.

void setup() //runs once when the the Arduino is powered on or reset.
{
  pinMode(PB, INPUT); //set the pinMode of pin PB to INPUT mode. This means that it will read the input voltage level.
  Serial.begin(9600); //initialize the serial communication at a baud rate of 9600.
}

void loop() //this function runs repeatedly after the setup function is executed.
{
  int buttonState = digitalRead(PB); // read the current state of the push button connected to pin PB and store the value in the int var buttonState.
  Serial.print("buttonState =   "); //send the string "buttonState = " to the serial port to allow the user recognize that int buttonstate is being printed.
  Serial.println(buttonState);      //send the value of the variable buttonState to the serial port followed by a newline character. This will print the value of the buttonState variable to the serial monitor.
}