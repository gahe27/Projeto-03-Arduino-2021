int const pinR = 9, pinG = 10, pinB = 11;
void setup()
{
  pinMode(pinR, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(pinB, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  char comando = Serial.read();
  Serial.println(comando);
  switch(comando){
  	case 'r':
        analogWrite(pinR, 255);
        analogWrite(pinG, 0);
        analogWrite(pinB, 0);
        break;
    case 'g':
        analogWrite(pinR, 0);
        analogWrite(pinG, 255);
        analogWrite(pinB, 0);
        break;
    case 'b':
        analogWrite(pinR, 0);
        analogWrite(pinG, 0);
        analogWrite(pinB, 255);
        break;
    case 'c':
        analogWrite(pinR, 0);
        analogWrite(pinG, 255);
        analogWrite(pinB, 255);
        break;
    case 'm':
        analogWrite(pinR, 255);
        analogWrite(pinG, 0);
        analogWrite(pinB, 255);
        break;
    case 'y':
          analogWrite(pinR, 255);
        analogWrite(pinG, 255);
        analogWrite(pinB, 0);
        break;
    case 'w':
          analogWrite(pinR, 255);
        analogWrite(pinG, 255);
        analogWrite(pinB, 255);
        break;
    case 'o':
          analogWrite(pinR, 0);
        analogWrite(pinG, 0);
        analogWrite(pinB, 0);
        break;
  }
}