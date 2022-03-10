//const int btnPin = 15;
//const int potPin = 12;
//const int joyPin = 27;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
}

void loop() {
  // put your main code here, to run repeatedly:
  pinMode(15, INPUT_PULLUP);
  

  delay(100); // this speeds up the simulation
  //button is 15
  //pot is 12
  //joystick is y - 27 and x - 26
  //Serial.println("button");
  Serial.print("{\"b\":");
  Serial.print(digitalRead(15));
  Serial.print(", \"p\":");
  Serial.print(analogRead(12));
  Serial.print(", \"j\":");
  Serial.print(analogRead(27));
  Serial.println("}");
  //delay(100);
  //Serial.println("pot");
  
  //delay(100);
  //Serial.println("joy");

  
}
