const int pir = 2;
const int led = 3;
void setup()
{
  pinMode(pir, INPUT); //PIR
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop()
{
  int sig = digitalRead(pir);
  Serial.println(sig);
  if (sig == 1)
  {
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
  }
}
