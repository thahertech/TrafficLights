  int red = 13;           // Red LED ( Machine OFF ) 
  int green = 11;         //Yellow LED ( Machine ON ) 
   
  int LightButton = 10;   // ButtonPin
  
  volatile int buttonstate = LOW;     // Button state to LOW
  
  
  
void setup() {

  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);

  pinMode(LightButton, INPUT);
  digitalWrite(red, HIGH);            // Safety measures

}



void loop() {

  ButtonPressed(); 
  ButtonStoped();
  
 }



void ButtonPressed(){
  
  int lc = LightButton;
  
  if(digitalRead(lc) == LOW)
{
    delay(5);

      if(digitalRead(lc) == LOW){
      
        delay(10);
      
          while(digitalRead(lc) == LOW);
      
          digitalWrite(green, buttonstate);
          buttonstate = !buttonstate;
        }

     
    }
}


void ButtonStoped(){
    
    digitalWrite(red, buttonstate); 

}  


