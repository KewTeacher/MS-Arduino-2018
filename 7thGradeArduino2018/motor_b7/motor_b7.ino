//April 14th
//infra red sensor robot.
//important!!!
//left sensor-----A0
//right sensor----A1
//left wheel------3
//right wheel-----5   
//mind to reverse one of the wheels' polarity in order to make sure that the robot goes forward. 
//right wheel: a19 c24 
int motorPinL = 3;
int motorPinR = 5;  
/*int speed1 = 0;
int speed2 =0;*/
int sensorValueL = 0;
int sensorValueR = 0;
void setup() {
  
//
Serial.begin(9600);
  }
void loop()  {
 int sensorValueL = analogRead(A0);
 int sensorValueR = analogRead(A1);
 /*float voltage = sensorValueL * (5.0 / 1023.0);*/
 Serial.println(sensorValueR);
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
 if (sensorValueL > 818){
  analogWrite(motorPinL, 0);
  analogWrite(motorPinR, 100);
 }else if (sensorValueR > 818){
    analogWrite(motorPinL, 100);
    analogWrite(motorPinR, 0);
 }else{
  analogWrite(motorPinL, 255);
  analogWrite(motorPinR, 255);
 }
 
}
