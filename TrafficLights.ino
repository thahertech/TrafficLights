  int red = 13;
  int yellow = 12;
  int green = 11; //Blue Led 
  int lightcontrol = 10;
  
void setup() {
  
pinMode(red, OUTPUT);
pinMode(yellow, OUTPUT);
pinMode(green, OUTPUT);

  pinMode(lightcontrol, INPUT);
  digitalWrite(green, HIGH);

}

void loop() {
  if(digitalRead(lightcontrol) == HIGH){
    delay(1000);                 // Press & Hold button

  if(digitalRead(lightcontrol) == HIGH) {
    

    LightChange();
    delay(500);
 }
  }
  if(digitalRead(lightcontrol) == HIGH){
    delay(10);    // Press button

  if(digitalRead(lightcontrol) == HIGH){
    Stop();
    delay(500);
    }
  }
}
void LightChange(){

                              // RED TO GREEN
  digitalWrite(green, LOW);
  digitalWrite(red, HIGH);
  delay(1000);
  digitalWrite(yellow, HIGH);
  delay(1000);

  digitalWrite(green, HIGH);
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);

  delay(500);

 
 
  
}

void Stop(){
                              // GREEN to RED
  digitalWrite(yellow, HIGH);
  delay(1000);
  digitalWrite(green, LOW); 
  delay(1000);
  
  digitalWrite(red, HIGH);
  digitalWrite(yellow, LOW);
  
  delay(500);



}
