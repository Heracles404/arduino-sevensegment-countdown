#define BUZZER A4

#define G_PIN A3
#define F_PIN A2
#define A_PIN A1
#define B_PIN A0

#define E_PIN 2
#define D_PIN 3
#define C_PIN 4
#define DP 5

void setup() {
  pinMode(G_PIN, OUTPUT);
  pinMode(F_PIN, OUTPUT);
  pinMode(A_PIN, OUTPUT);
  pinMode(B_PIN, OUTPUT);

  pinMode(E_PIN, OUTPUT);
  pinMode(D_PIN, OUTPUT);
  pinMode(C_PIN, OUTPUT);
  pinMode(DP, OUTPUT);
}

void loop() {
  all_high();
  delay(500);
  all_low();
  delay(500);

  nine();
  delay(1000);

  eight();
  delay(1000);

  seven();
  delay(1000);

  six();
  delay(1000);

  five();
  delay(1000);

  four();
  delay(1000);

  three();
  delay(1000);

  two();
  delay(1000);

  one();
  delay(1000);

  zero();
  delay(1000);
}

void buzz(){
  tone(BUZZER, 500, 1000);
  delay(1000);
  noTone(BUZZER);
}

void all_high(){
  buzz();

  // Light all segments
  digitalWrite(G_PIN, HIGH);
  digitalWrite(F_PIN, HIGH);
  digitalWrite(A_PIN, HIGH);
  digitalWrite(B_PIN, HIGH);

  digitalWrite(E_PIN, HIGH);
  digitalWrite(D_PIN, HIGH);
  digitalWrite(C_PIN, HIGH);
  digitalWrite(DP, HIGH);
}

void all_low(){
  // Turn off all segments
  digitalWrite(G_PIN, LOW);
  digitalWrite(F_PIN, LOW);
  digitalWrite(A_PIN, LOW);
  digitalWrite(B_PIN, LOW);

  digitalWrite(E_PIN, LOW);
  digitalWrite(D_PIN, LOW);
  digitalWrite(C_PIN, LOW);
  digitalWrite(DP, LOW);
}

void nine(){
  // Turn off all segments first
  all_low();

  // Light specific segments to display '9'
  digitalWrite(G_PIN, HIGH);
  digitalWrite(F_PIN, HIGH);
  digitalWrite(A_PIN, HIGH);
  digitalWrite(B_PIN, HIGH);
  digitalWrite(D_PIN, HIGH);
  digitalWrite(C_PIN, HIGH);
}

void eight(){
    // Turn off all segments first
  all_low();

  // Light specific segments to display '8'
  digitalWrite(G_PIN, HIGH);
  digitalWrite(F_PIN, HIGH);
  digitalWrite(A_PIN, HIGH);
  digitalWrite(B_PIN, HIGH);
  digitalWrite(E_PIN, HIGH);
  digitalWrite(D_PIN, HIGH);
  digitalWrite(C_PIN, HIGH);
}

void seven(){
  // Turn off all segments first
  all_low();

  // Light specific segments to display '7'
  digitalWrite(A_PIN, HIGH);
  digitalWrite(B_PIN, HIGH);
  digitalWrite(C_PIN, HIGH);
}

void six() {
  // Turn off all segments first
  all_low();

  // Light specific segments to display '6'
  digitalWrite(G_PIN, HIGH);
  digitalWrite(A_PIN, HIGH);
  digitalWrite(F_PIN, HIGH);
  digitalWrite(E_PIN, HIGH);
  digitalWrite(D_PIN, HIGH);
  digitalWrite(C_PIN, HIGH);
}

void five() {
  // Turn off all segments first
  all_low();

  // Light specific segments to display '5'
  digitalWrite(A_PIN, HIGH);
  digitalWrite(F_PIN, HIGH);
  digitalWrite(G_PIN, HIGH);
  digitalWrite(D_PIN, HIGH);
  digitalWrite(C_PIN, HIGH);
}

void four() {
  // Turn off all segments first
  all_low();

  // Light specific segments to display '4'
  digitalWrite(B_PIN, HIGH);
  digitalWrite(C_PIN, HIGH);
  digitalWrite(F_PIN, HIGH);
  digitalWrite(G_PIN, HIGH);
}

void three() {
  // Turn off all segments first
  all_low();

  // Light specific segments to display '3'
  digitalWrite(A_PIN, HIGH);
  digitalWrite(B_PIN, HIGH);
  digitalWrite(C_PIN, HIGH);
  digitalWrite(D_PIN, HIGH);
  digitalWrite(G_PIN, HIGH);

  buzz();
}

void two() {
  // Turn off all segments first
  all_low();

  // Light specific segments to display '2'
  digitalWrite(A_PIN, HIGH);
  digitalWrite(B_PIN, HIGH);
  digitalWrite(G_PIN, HIGH);
  digitalWrite(E_PIN, HIGH);
  digitalWrite(D_PIN, HIGH);

  buzz();
}

void one() {
  // Turn off all segments first
  all_low();

  // Light specific segments to display '1'
  digitalWrite(B_PIN, HIGH);
  digitalWrite(C_PIN, HIGH);

  buzz();
}

void zero() {
  // Turn off all segments first
  all_low();

  // Light specific segments to display '0'
  digitalWrite(A_PIN, HIGH);
  digitalWrite(B_PIN, HIGH);
  digitalWrite(C_PIN, HIGH);
  digitalWrite(D_PIN, HIGH);
  digitalWrite(E_PIN, HIGH);
  digitalWrite(F_PIN, HIGH);

  buzz();
}