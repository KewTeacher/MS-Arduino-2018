 int motorPin1 = 3;
int motorPin2 = 5;

int speed1 = 255;
int speed2 = 255;


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeately:
  analogWrite(motorPin1, speed1) ;
  analogWrite(motorPin2, speed2);
}

