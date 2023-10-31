unsigned static int myButton = D8;
unsigned static int myLED = D7;

void setup() {
//configure serial monitor
Serial.begin(9600);
//debug serial monitor
Serial.println("Serial monitor configured to 9600");
Serial.println("ewad");
pinMode(myButton, INPUT);
pinMode(myLED, OUTPUT);
}

void loop() {
//read serial data from light sensor
  int val = digitalRead(myButton);
  int senVal = digitalRead(myLED);
      Serial.print("myButtonValue:");
    Serial.println(String(val));

   if (val == 1) {
    
   digitalWrite(myLED, HIGH);}
  
  if (val == 0) {
    digitalWrite(myLED, LOW);}
  }

   