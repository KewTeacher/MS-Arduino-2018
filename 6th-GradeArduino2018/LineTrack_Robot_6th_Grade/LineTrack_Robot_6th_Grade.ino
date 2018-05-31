
int motorPinR = 3;
int motorPinL = 5;
int speedL = 255;
int speedR =255;
int sensorValueL = 0;
int sensorValueR = 0;
int potValue=0;
void setup() {
//
Serial.begin(9600);                 
}

// the loop routine runs over and over again forever:
void loop() {
  potValue= analogRead(A5);
  //Serial.print(potValue);
  speedL=potValue/4;
  speedR= potValue/4;
  //Serial.print("   ");
  //Serial.print(speedL);
  //Serial.print("   ");
  //Serial.println(speedR);
  // read the input on analog pin 0:
  sensorValueL = analogRead(A0);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltageL = sensorValueL * (5.0 / 1023.0);
  
sensorValueR = analogRead(A4);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltageR = sensorValueR * (5.0 / 1023.0);
  // print out the value you read:
  
  Serial.print(voltageL);
   Serial.print("   ");
 
  Serial.println(sensorValueR);
  
   if (voltageL > 3 && voltageR > 3){
    
  /*speed1 = 100;
  speed2 = 100;*/
  analogWrite(motorPinR, speedR);
  analogWrite(motorPinL, speedL);
}else if(voltageR < 1 && voltageL > 3){
  /*speed1 = 40;
  speed2 = 0;*/
  analogWrite(motorPinR, 0);
  analogWrite(motorPinL, speedL); 
  Serial.println("Going right");
}
else{
analogWrite(motorPinR, speedR);
analogWrite(motorPinL, 0);
Serial.println("Going left ");
}
}
