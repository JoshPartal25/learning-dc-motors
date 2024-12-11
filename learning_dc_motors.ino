#define ENABLE 5 //pin that tells the motor to turn on with intensity
#define DIRECTIONA 3
#define DIRECTIONB 4


void setup() {
  // put your setup code here, to run once:
  //they are outputs because we do not have to hit a button or anything, it will go by itself with the code
  pinMode(ENABLE, OUTPUT);
  pinMode(DIRECTIONA, OUTPUT);
  pinMode(DIRECTIONB, OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ENABLE, 250);

  digitalWrite(DIRECTIONA, HIGH);
  digitalWrite(DIRECTIONB, LOW);
  delay(4000);
  digitalWrite(DIRECTIONA, LOW);
  digitalWrite(DIRECTIONB, HIGH);
  delay(4000);
}
