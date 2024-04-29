int redPin = 2;
int yellowPin = 4;
int greenPin = 7;
// C++ code
// 이 코드는 실행 시 한 번만 실행된다.
// 세팅하는 곳.
void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

// 반복하여 일을 실행시키는 곳.
void loop()
{
  // LED를 켠다.
  digitalWrite(redPin, HIGH); // redPin을 HIGH로 출력하라.
  delay(1000); // 1초 기다리기
  // LED를 끈다.
  digitalWrite(redPin, LOW); // redPin을 LOW로 출력하라.
  delay(1000); // 1초 기다리기
  // LED를 켠다.
  digitalWrite(yellowPin, HIGH); // yellowPin을 HIGH로 출력하라.
  delay(1000); // 1초 기다리기
  // LED를 끈다.
  digitalWrite(yellowPin, LOW); // yellowPin을 LOW로 출력하라.
  delay(1000); // 1초 기다리기
  // LED를 켠다.
  digitalWrite(greenPin, HIGH); // greenPin을 HIGH로 출력하라.
  delay(1000); // 1초 기다리기
  // LED를 끈다.
  digitalWrite(greenPin, LOW); // greenPin을 LOW로 출력하라.
  delay(1000); // 1초 기다리기
}