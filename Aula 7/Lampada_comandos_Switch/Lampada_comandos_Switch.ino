
char leitor;
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()) {
    leitor = Serial.read();
    switch(leitor){
      case 'a':
      digitalWrite(13, HIGH);
      break;
      case 's':
      digitalWrite(13, LOW);
      break;
      case 'q':
      digitalWrite(12, HIGH);
      break;
      case 'w':
      digitalWrite(12, LOW);
      break;
      }  
  }
}
