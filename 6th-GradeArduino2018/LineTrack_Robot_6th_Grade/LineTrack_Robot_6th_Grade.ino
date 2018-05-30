
int motorPinR = 3;
int motorPinL = 5;
/*int speed1 = 0;
int speed2 =0;*/
int sensorValueL = 0;
int sensorValueR = 0;
void setup() {
//
Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  sensorValueL = analogRead(A0);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltageL = sensorValueL * (5.0 / 1023.0);
  
sensorValueR = analogRead(A0);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltageR = sensorValueL * (5.0 / 1023.0);
  // print out the value you read:
  
  Serial.println(voltageL);
   if (voltageL > 3 && voltageR > 3){
    
  /*speed1 = 100;
  speed2 = 100;*/
  analogWrite(motorPinR, 100);
  analogWrite(motorPinL, 100);
}else if(voltageR < 1 && voltageL > 3){
  /*speed1 = 40;
  speed2 = 0;*/
  analogWrite(motorPinR, 0);
  analogWrite(motorPinL, 40); 
}
else{
analogWrite(motorPinR, 40);
analogWrite(motorPinL, 0);
}
}
