//April 14th
//infra red sensor robot.
int motorPinL = 3;
int motorPinR = 5;
/*int speed1 = 0;
int speed2 =0;*/
int sensorValueL = 0;
int sensorValueR = 0;
int speedL = 80;
int speedR = 100;
void setup() {
  
//
Serial.begin(9600);
  }
void loop()  {
 int sensorValueL = analogRead(A0);
 int sensorValueR = analogRead(A1);
 /*float voltage = sensorValueL * (5.0 / 1023.0);*/
 Serial.println(sensorValueL);
 /*if (sensorValue > 3 ){
  speed1 = 100
  speed2 = 100
  analogWrite(motorPin1, 100);
  analogWrite(motorPin2, 100);
 }else{
  speed1 = 40;
  speed2 = 0;
  analogWrite(motorPin1, 0);
  analogWrite(motorPin2, 40);
 }*/
 /*if (sensorValueL * ( 5 / 1023 ) > 3){
  analogWrite(motorPinL, 0);
  analogWrite(motorPinR, 100);
 }else{
  if (sensorValueR * (5 / 1023 ) > 3){
    analogWrite(motorPinL, 100);
    analogWrite(motorPinR, 0);
 }else{
  analogWrite(motorPinL, 100);
  analogWrite(motorPinR, 100);*/
/*if (sensorValueL * (5/1023) > 3){
  analogWrite(motorPinL, 0);
}else{ 
  analogWrite(motorPinL, 100);
}
if (sensorValueR * (5/1023) > 3){
  analogWrite(motorPinR, 0);
}else{ 
  analogWrite(motorPinL, 100);
 }*/
 if (sensorValueL < 200 && sensorValueR > 700){
  analogWrite(motorPinL, 0);
  analogWrite(motorPinR, speedR+30);
 }else if (sensorValueR < 200 && sensorValueL > 700){
  analogWrite(motorPinL, speedL+30);
  analogWrite(motorPinR, 0);
 }else{
  analogWrite(motorPinL, speedL);
  analogWrite(motorPinR, speedR);
 }
//Test Code down below
 /*(motorPinL, 0);
 analogWrite(motorPinR, 0);*/
 }
 
