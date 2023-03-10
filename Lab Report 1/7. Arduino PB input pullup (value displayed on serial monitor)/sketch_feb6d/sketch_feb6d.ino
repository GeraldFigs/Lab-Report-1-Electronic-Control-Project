#define button 2
#define R 3
#define G 3
#define B 3

void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);       //begin serial communications at 9600 bits of data per second between Arduino and computer
pinMode (button, INPUT_PULLUP); //Pin 2 PB input. Pull-up uses Arduino's internal pull-up resistor.
pinMode (R, OUTPUT);
pinMode (G, OUTPUT);
pinMode (B, OUTPUT);

}
 
void loop() {
  // put your main code here, to run repeatedly:

int sensorVal = !digitalRead(button); // read the PB value into a variable; ! = reverse logic
Serial.print("PBvalue = "); //print out PB value label
Serial.println(sensorVal);  //print out sensorVal into that label

/*NOTE: Pull-up invert's the PB's logic. Thus, HIGH = open/unpressed; LOW = closed/pressed. */


/*WHEN PB = 0, THEN RGB = WHITE. PB = 1, THEN RGB = OFF*/
digitalWrite(R, 0);
digitalWrite(G, 0);
digitalWrite(B, 0);




}
