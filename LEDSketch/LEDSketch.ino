
int LED1 = 13; //This is pin 13 on the Elegoo/Arduino Board

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT); //
}

void loop() {
  // put your main code here, to run repeatedly:
//  Serial.println(INITIAL_RATE);
  digitalWrite(LED1, HIGH);
}
