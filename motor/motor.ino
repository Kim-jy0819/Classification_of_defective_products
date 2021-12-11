#include<Servo.h> //Servo 라이브러리를 추가
Servo servo;      //Servo 클래스로 servo객체 생성
int value = 0;    // 각도를 조절할 변수 value
int in1 = 11;       // 8번 포트 제어
int in2 = 12;      // 9번 포트 제어

void setup() {
  servo.attach(7);     //맴버함수인 attach : 핀 설정
  Serial.begin(9600); //시리얼 모니터 사용 고고
  pinMode(A1, INPUT);
  pinMode(in1, OUTPUT); 
  pinMode(in2, OUTPUT);

}

void loop() {
  int AA = analogRead(A1);
  if( AA > 1000 ){            //스위치가 켜졌을 경우
    analogWrite(in1, 180);    //모터작동
    digitalWrite(in2, LOW);
  }
  else{               
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
  }

  
  if(Serial.available())      //시리얼 모니터에 데이터가 입력되면
  {
    char in_data;             // 입력된 데이터를 담을 변수 in_data
    in_data = Serial.read(); //시리얼모니터로 입력된 데이터 in_data로 저장2
    if(in_data == '1')        //입력된 데이터가 1이라면
    {
      value = 0;              //value = 0
    }
    if(in_data == '2')        //입력된 데이터가 2이라면
    {
      value = 50;              //value = 50 
    }
    if(in_data == '3')        //입력된 데이터가 3이라면
    {
      value = 100;              //value = 100 
    }
      
    servo.write(value); //value값의 각도로 회전.
  }
}
