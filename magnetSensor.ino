int sens=5;
int led=9;
int out;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(sens,INPUT);
}

void loop() {

  out=digitalRead(sens);
  if(out==LOW){
    digitalWrite(led,HIGH);
  }
   if(out==HIGH){
    digitalWrite(led,LOW);
  }


}
