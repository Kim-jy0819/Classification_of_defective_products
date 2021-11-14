void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
String str;
while (Serial.available()>0){
  char c=(char)Serial.read(); # python에서 보낸 문자를 받음.
  if (strlen(c)<1 ){
  str=c;

  }
}

  //String sOutPut ='[' +str+']';
  Serial.println(String(str)); # 받은 문자를 시리얼 모니터에 출력

}
