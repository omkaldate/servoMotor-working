#include<Servo.h>
Servo motor_1;
int angle;

void setup() {
motor_1.attach(4);

}

void loop() {
  for(angle=0; angle<=180; angle+=1){
  motor_1.write(angle);
  delay(10);
  }
delay(1000);

for(angle=180; angle>=180; angle-=1){
  motor_1.write(angle);
  delay(10);
}
}
