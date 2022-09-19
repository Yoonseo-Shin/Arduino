void setup()
{
  pinMode(7, OUTPUT);
  digitalWrite(7,0);
  delay(1000);
}

void loop()
{
  int i=0;
  while(i<5){ //5번 반복
    
  digitalWrite(7,1);
  delay(100);
  digitalWrite(7,0);
  delay(100); //한 세트에 0.2초. 5번 반복하면 1초.
  i++;
  }
  digitalWrite(7,1);
  while(1){ //꺼진채 마무리
    }
}
