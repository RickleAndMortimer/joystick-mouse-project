//pins
int m1 = 2;
int m2 = 3;
int mX = A1;
int mY = A0;

//code

void setup() {
  Serial.begin(9600);           //  setup serial
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(mX, INPUT);
  pinMode(mY, INPUT);
}

void loop() {
  //reads pins
  int mX_int= analogRead(mX);
  int mY_int = analogRead(mY);
  //Prints info
  Serial.print(mX_int);
  Serial.print(" ");
  Serial.print(mY_int);
  Serial.print(" ");
  if (digitalRead(m1) == HIGH) {
    Serial.print("M1_PRESSED ");
  }
  else {
    Serial.print("M1_OPEN ");
  }
  if (digitalRead(m2) == HIGH) {
    Serial.print("M2_PRESSED ");
  }
  else {
    Serial.print("M2_OPEN ");
  }
  
  Serial.println();
  delay(100);
}
