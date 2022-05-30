void setup()
{
  // put your setup code here, to run once:
  Serial.begin(120000);
  Serial.setTimeout(1);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT); 
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  int pin;
  while (!Serial.available());
  pin = Serial.readString().toInt();
  switch (pin) {
    case 4: {
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, HIGH);
        digitalWrite(8, LOW);
        digitalWrite(9, HIGH);
        digitalWrite(10, LOW);
        digitalWrite(11, HIGH);
        break;
      }
    case 6: {
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH);
        digitalWrite(7, LOW);
        digitalWrite(8, LOW);
        digitalWrite(9, HIGH);
        digitalWrite(10, LOW);
        digitalWrite(11, HIGH);
        break;
      }
    case 8: {
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
        digitalWrite(6, LOW);
        digitalWrite(7, HIGH);
        digitalWrite(8, HIGH);
        digitalWrite(9, LOW);
        digitalWrite(10, LOW);
        digitalWrite(11, HIGH);
        break;
      }
    case 10: {
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
        digitalWrite(6, LOW);
        digitalWrite(7, HIGH);
        digitalWrite(8, LOW);
        digitalWrite(9, HIGH);
        digitalWrite(10, HIGH);
        digitalWrite(11, LOW);
        break;
      }
    default: {
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, HIGH);
        digitalWrite(8, LOW);
        digitalWrite(9, HIGH);
        digitalWrite(10, LOW);
        digitalWrite(11, HIGH);
        break;
      }
  }

  Serial.print(pin);

}
