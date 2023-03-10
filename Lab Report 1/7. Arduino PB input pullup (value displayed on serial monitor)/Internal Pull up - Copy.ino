void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);       //begin serial communications at 9600 bits of data per second between Arduino and computer
pinMode (2, INPUT_PULLUP); //Pin 2 PB input. Pull-up uses Arduino's internal pull-up resistor.
pinMode (13, OUTPUT);       //Uses the onboard LED as an indicator
}

void loop() {
  // put your main code here, to run repeatedly:

int sensorVal = digitalRead(2); // read the PB value into a variable
Serial.println(sensorVal); //print out the value of the PB

/*NOTE: Pull-up invert's the PB's logic. Thus, HIGH = open/unpressed; LOW = closed/pressed. */
if (sensorVal == HIGH) {
    digitalWrite(13, LOW);
  } else {
    digitalWrite(13, HIGH);
  }

}
