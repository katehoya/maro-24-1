#include <Servo.h> // 서보모터 라이브러리 포함

Servo Servo1; 
Servo Servo2;
Servo Servo3;

int buttonPin1 = 2; // 버튼 핀 번호 설정
int buttonPin2 =7;
int buttonPin3 = 3;

int servoPin1 = 8;  // 서보모터 핀 번호 설정
int servoPin2 =13 ;
int servoPin3 =4 ;


int buttonState1 = 0; // 버튼 상태를 저장할 변수 초기화
int lastButtonState1 = 0;

int buttonState2 = 0; // 버튼 상태를 저장할 변수 초기화
int lastButtonState2 = 0;

int buttonState3 = 0; // 버튼 상태를 저장할 변수 초기화
int lastButtonState3 = 0;

int AA = 10;
int AB = 6;

void setup() {
  Servo1.attach(servoPin1); // 서보모터 핀을 서보 객체에 연결
  Servo2.attach(servoPin2); // 서보모터 핀을 서보 객체에 연결
  Servo3.attach(servoPin3); // 서보모터 핀을 서보 객체에 연결

  pinMode(buttonPin1, INPUT); // 버튼 핀을 입력 모드로 설정
  pinMode(buttonPin2, INPUT); // 버튼 핀을 입력 모드로 설정
  pinMode(buttonPin3, INPUT); // 버튼 핀을 입력 모드로 설정

  pinMode(AA, OUTPUT);
  pinMode(AB,OUTPUT);
  
}

void loop() {
  digitalWrite(AA,LOW);
  digitalWrite(AB,LOW);

  buttonState1 = digitalRead(buttonPin1); // 버튼 상태 읽기
  buttonState2 = digitalRead(buttonPin2); // 버튼 상태 읽기
  buttonState3 = digitalRead(buttonPin3); // 버튼 상태 읽기

  if (buttonState1== HIGH && lastButtonState1 == LOW) { // 버튼이 눌렸는지 확인

    Servo1.write(60);
    delay(1500);

    Servo2.write(-90);
    digitalWrite(AA,LOW);
    digitalWrite(AB,LOW);
    delay(5000);
    digitalWrite(AA,LOW);
    digitalWrite(AB,LOW);
    Servo2.write(100);
    delay(2000);

    Servo1.write(-60);// 서보모터를 각도로 회전
////////////////////////////////////////////////////////////////// 
    Servo1.write(-140);
    delay(1500);

    Servo2.write(-90);
    digitalWrite(AA,LOW);
    digitalWrite(AB,LOW);
    delay(5000);
    digitalWrite(AA,LOW);
    digitalWrite(AB,LOW);
    Servo2.write(100);
    delay(2000);


    Servo3.write(-60);
    delay(1500);
    Servo3.write(60);
    delay(1500);

    Servo1.write(140);


     lastButtonState1 = LOW; // 이전 버튼 상태 업데이트

  }



    if (buttonState2 == HIGH && lastButtonState2 == LOW) { // 버튼이 눌렸는지 확인

    Servo1.write(200);
    delay(1500);

    Servo2.write(-80);
    digitalWrite(AA,LOW);
    digitalWrite(AB,LOW);
    delay(5000);
    digitalWrite(AA,LOW);
    digitalWrite(AB,LOW);
    Servo2.write(100);
    delay(2000);

    Servo1.write(-200);// 서보모터를 각도로 회전
////////////////////////////////////////////////////////////////// 
    Servo1.write(120);
    delay(1500);

    Servo2.write(-80);
    digitalWrite(AA,LOW);
    digitalWrite(AB,LOW);
    delay(5000);
    digitalWrite(AA,LOW);
    digitalWrite(AB,LOW);
    Servo2.write(100);
    delay(2000);

    Servo1.write(-120);


     lastButtonState1 = LOW; // 이전 버튼 상태 업데이트

  }


}