/*This code sets up three pins (R, G, and B) as output pins (8, 9, 10), 
and then repeatedly turns each pin in red, green, blue, and white sequence for "delayVal" 200ms each, and then turns it off. This achieves the blink effect.
Then, the sequence repeats.*/


/*declare three int variables R, G, B that correspond to the three pinds of the RGB LED.*/
int R = 8;          // declare an integer variable R and set it to 8
int G = 9;          // declare an integer variable G and set it to 9
int B = 10;         // declare an integer variable B and set it to 10

int delayVal = 200;   //store the time delay (in milliseconds) between each LED blink. It is set to 200 milliseconds.

void setup() {
  // put your setup code here, to run once:
  pinMode (R, OUTPUT);          // initialize digital pin "R" as an output pin (8). This is where the red pin of the RGB LED is connected
  pinMode (G, OUTPUT);          // initialize digital pin "G" as an output pin (9). This is where the green pin of the RGB LED is connected
  pinMode (B, OUTPUT);          // initialize digital pin "B" as an output pin (10). This is where the blue pin of the RGB LED is connected

}

void loop() {
  // put your main code here, to run repeatedly:


  //LIGHT RED COLOR BY TURNING ON ONLY THE RED PIN
  digitalWrite(R, 1);          // turn pin R on by setting its voltage to HIGH
  delay(delayVal);             // pause the program for 200ms to achieve blink effect
  digitalWrite(R, 0);          // turn pin R off by setting its voltage to LOW

  //LIGHT GREEN COLOR BY TURNING ON ONLY THE GREEN PIN
  digitalWrite(G, 1);          // turn pin G on by setting its voltage to HIGH
  delay(delayVal);             // pause the program for 200ms to achieve blink effect
  digitalWrite(G, 0);          // turn pin G on by setting its voltage to LOW

  //LIGHT BLUE COLOR BY TURNING ON ONLY THE BLUE PIN
  digitalWrite(B, 1);          // turn pin B on by setting its voltage to HIGH
  delay(delayVal);             // pause the program for 200ms to achieve blink effect
  digitalWrite(B, 0);          // turn pin B on by setting its voltage to LOW

  //LIGHT WHITE COLOR BY SIMULTANEOUSLY TURNING ON EVERY PINS (R,G, AND B)
  digitalWrite(R, 1);          // turn pin R on to create a white color
  digitalWrite(G, 1);          // turn pin R on to create a white color
  digitalWrite(B, 1);          // turn pin R on to create a white color
  delay(delayVal);             // pause the program for 200ms to achieve blink effect
  digitalWrite(R, 0);          // turn pin R off to turn off the white color
  digitalWrite(G, 0);          // turn pin G off to turn off the white color
  digitalWrite(B, 0);          // turn pin B off to turn off the white color


}
