#include<Servo.h>
#define echo 4
#define trig 5
int buz = 6;
int maximumRange = 50;
int minimumRange = 0;
Servo motor;
void setup() {
  motor.attach(3);
  motor.write(0);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(buz, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  int olcum = mesafe(maximumRange, minimumRange);
}
int mesafe(int maxrange, int minrange) {
  long duration, distance;
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  duration = pulseIn(echo, HIGH);
  distance = duration / 58.2;
  delay(100);


  if (distance >= maxrange  || distance <= minrange) {
    digitalWrite(8, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    delay(2000);
    digitalWrite(8, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    return 0;
  }
  else
    motor.write(0);
  delay(800);
  motor.write(180);
  delay(800);
  Serial.print(distance);
  Serial.println(" cm");
  if (distance <= 10) {
    digitalWrite(8, HIGH);
    digitalWrite (buz , HIGH);
    delay(50);
    digitalWrite (buz , LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
  }
  else if (distance <= 20) {
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite (buz , HIGH);
  delay(100);
  digitalWrite (buz , LOW);
   digitalWrite(8, LOW);
   digitalWrite(9, LOW);
   digitalWrite(10, LOW);
   digitalWrite(11, LOW);
   digitalWrite(12, LOW);
  }
  else if (distance <= 30) {
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite (buz , HIGH);
  delay(300);
  digitalWrite (buz , LOW);
    digitalWrite(8, LOW);
   digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
  }
   else if (distance <= 40) {
   digitalWrite(8, HIGH);
   digitalWrite(9, HIGH);
   digitalWrite(10, HIGH);
   digitalWrite(11, HIGH);
   digitalWrite(12, LOW);
   digitalWrite (buz , HIGH);
   delay(500);
   digitalWrite (buz , LOW);
   digitalWrite(8, LOW);
   digitalWrite(9, LOW);
   digitalWrite(10, LOW);
   digitalWrite(11, LOW);
   digitalWrite(12, LOW);
  }
  else {
  digitalWrite(8, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(buz, HIGH);
    delay(1000);
    digitalWrite(buz, LOW);
    digitalWrite(8, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);

