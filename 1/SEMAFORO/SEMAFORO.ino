// PROJETO 3  - SEMAFARO
// VARIAVEIS
int ledDelay = 5000;     // espera entre as alterações
int redPin = 10;
int yellowPin = 9;
int greenPin = 8;




void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redPin, HIGH);
  delay(ledDelay);

  digitalWrite(yellowPin, HIGH);
  delay(2000);

  digitalWrite(greenPin, HIGH);
  digitalWrite(redPin, LOW);
  digitalWrite(yellowPin, LOW);
  delay(ledDelay);

  digitalWrite(yellowPin, HIGH);
  digitalWrite(greenPin, LOW);
  delay(2000);

  digitalWrite(yellowPin, LOW);
  

}
