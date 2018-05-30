int motorPinR = 3;
int motorPinL = 5;

int speed1= 130; //L
int speed2= 100;
int ledPin = 13;
int sensorPinR = A0;
int sensorPinL = A2;
int sensorValueL =  0;
int sensorValueR = 0;

void setup() {
pinMode(ledPin, OUTPUT); 
Serial.begin(9600); 
 }

 
 void loop(){
  sensorValueL = analogRead(sensorPinL);
  sensorValueR = analogRead(sensorPinR);
  digitalWrite(ledPin, HIGH); 
  Serial.print(sensorValueL);
  Serial.print("      ");
  Serial.println(sensorValueR);
  if(sensorValueL >800 &&  sensorValueR <200){
      analogWrite(motorPinL,0);
  analogWrite(motorPinR,speed2+40);
    
  }else if(sensorValueL <200 && sensorValueR >800){
    analogWrite(motorPinL,speed1+40);
  analogWrite(motorPinR,0); 
  } else{
     analogWrite(motorPinL,speed1);
  analogWrite(motorPinR,speed2); 
  }
  


 }
 // delet this 


