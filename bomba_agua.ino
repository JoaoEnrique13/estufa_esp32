//01/11/2022
int led = 2; // led do esp32
int rele = 15;//rele
void setup() {
  pinMode(rele, OUTPUT);
  pinMode(led, OUTPUT);
}


void loop() {
  /* 
   *  LOW - desliga relé e liga a lampada
   *  HIGH - liga relé e desliga a lampada
   */
  digitalWrite(led, HIGH);   // liga led do esp
  digitalWrite(rele, LOW);   // dessliga rele ligando o motor
  delay(5000);                       
  digitalWrite(led, LOW);    // led do esp
  digitalWrite(rele, HIGH);    // liga rele desligando o motor
  delay(3000);                       
}
int led = 2; // led do esp32
int rele = 15;//rele
void setup() {
  pinMode(rele, OUTPUT);
  pinMode(led, OUTPUT);
}


void loop() {
  /* 
   *  LOW - desliga relé e liga a lampada
   *  HIGH - liga relé e desliga a lampada
   */
  digitalWrite(led, HIGH);   // liga led do esp
  digitalWrite(rele, LOW);   // dessliga rele ligando o motor
  delay(5000);                       
  digitalWrite(led, LOW);    // led do esp
  digitalWrite(rele, HIGH);    // liga rele desligando o motor
  delay(3000);                       
}
