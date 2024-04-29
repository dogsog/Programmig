int ledPin = 9; // 아날로그 핀 번호 설정
int brightness = 0; // LED 밝기
int fadeAmount = 1; // LED fade 할 포인트 수
//
void setup()
{
  // 핀 번호 9를 출력으로 선언
  pinMode(ledPin, OUTPUT);
}

// 반복 구문
void loop()
{
  // 아날로그 핀 번호 9 세팅
  analogWrite(ledPin, brightness);
  
  // 반복하면서 다음 밝기 변경
  brightness = brightness + fadeAmount;
  
  // fade 끝에서 fade 방향을 반대로
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  // 10 밀리초 기다리기
  delay(10);
}