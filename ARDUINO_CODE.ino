#define ledPin1  D0
#define ledPin2  D1
#define ledPin3  D2
void setup() {
   Serial.begin(9600);
   pinMode(ledPin1, OUTPUT);
   pinMode(ledPin2, OUTPUT);
   pinMode(ledPin3, OUTPUT);
}

void loop() {
  char v=Serial.read();
    if(v=='4'){
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
  }
  else if(v=='1'){
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
  }
  else if(v=='2'){
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, HIGH);
  }
  
  else if (v=='0'){
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
  }
}
