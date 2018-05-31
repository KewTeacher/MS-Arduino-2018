int motorPinR = 3;
int motorPinL = 5;

int speedL = 255;
int speedR = 255;
int sensorValueL =0;
int sensorValueR =0;
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
}
 
void loop() { 
  // put your main code here, to run repeatedly: 
 // read the input on analog pin 0:
  sensorValueR = analogRead(A0);
  sensorValueL = analogRead(A1);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltageL = sensorValueL * (5.0 / 1023.0);
  // print out the value you read:
  Serial.print(voltageL);
  Serial.print("   " ); 
   float voltageR = sensorValueR * (5.0 / 1023.0);
  // print out the value you read:
  Serial.println(voltageR); 
  if(voltageL < 1 && voltageR > 3){
    speedR=255;
    speedL=0;
    Serial.println("leftblack" ); 
  }
  if(voltageR < 1 && voltageL > 3){
    speedR=0;
    speedL=255;
    Serial.println("rightblack" );
  }
  if(voltageL > 3 && voltageR > 3){
    speedR=255;
    speedL=255;
    Serial.println("bothwhite" );
  }
analogWrite (motorPinR,speedR);
analogWrite (motorPinL,speedL);
}

  

