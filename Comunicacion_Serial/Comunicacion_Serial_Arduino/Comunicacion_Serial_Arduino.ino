int input;
void setup() {
  pinMode(12, OUTPUT); 
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()>0){
    input=Serial.read();
    if (input=='1'){
      digitalWrite(12, HIGH); 
    }
    else
    {
      digitalWrite(12, LOW); 
    }
  }
}
