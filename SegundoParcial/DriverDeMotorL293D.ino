// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
analogWrite(2,255);
  analogWrite(3,0);
  delay(1500);
  	analogWrite(3,255);
  analogWrite(2,0);
  delay(1500);
}