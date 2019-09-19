int LED = 4;
int LED2 = 5;
int LED3 = 6;
int LED4 = 7;
int LED5 = 8;
int LED6 = 9;
int LED7 = 10;
int LED8 = 11;
void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(LED8, OUTPUT);
}
void loop() {
  if (Serial.available()) {
    char Letra = Serial.read();
    if (Letra == 'a') {
      digitalWrite(LED, HIGH);
      delay(20);
      digitalWrite(LED, LOW);
    }
    if (Letra == 's') {
      digitalWrite(LED2, HIGH);
      delay(20);
      digitalWrite(LED2, LOW);
    }
    if (Letra == 'd') {
      digitalWrite(LED3, HIGH);
      delay(20);
      digitalWrite(LED3, LOW);
    }
    if (Letra == 'f') {
      digitalWrite(LED4, HIGH);
      delay(20);
      digitalWrite(LED4, LOW);
    }
    if (Letra == 'h') {
      digitalWrite(LED5, HIGH);
      delay(20);
      digitalWrite(LED5, LOW);
    }
    if (Letra == 'j') {
      digitalWrite(LED6, HIGH);
      delay(20);
      digitalWrite(LED6, LOW);
    }
    if (Letra == 'k') {
      digitalWrite(LED7, HIGH);
      delay(20);
      digitalWrite(LED7, LOW);
    }
    if (Letra == 'l') {
      digitalWrite(LED8, HIGH);
      delay(20);
      digitalWrite(LED8, LOW);
    }
  }
}
