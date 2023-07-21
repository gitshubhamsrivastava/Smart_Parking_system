// C++ code
//
int var1 = 0;

int var2 = 0;

int var3 = 0;

int var4 = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);

  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);

  return pulseIn(echoPin, HIGH);
}

void setup()
{
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  var1 = 0.01723 * readUltrasonicDistance(13, 12);
  if (var1 <= 50) {
    digitalWrite(1, HIGH);
  } else {
    digitalWrite(1, LOW);
  }
  var2 = 0.01723 * readUltrasonicDistance(11, 10);
  if (var2 <= 50) {
    digitalWrite(2, HIGH);
  } else {
    digitalWrite(2, LOW);
  }
  var3 = 0.01723 * readUltrasonicDistance(9, 8);
  if (var3 <= 50) {
    digitalWrite(3, HIGH);
  } else {
    digitalWrite(3, LOW);
  }
  var4 = 0.01723 * readUltrasonicDistance(7, 6);
  if (var4 <= 50) {
    digitalWrite(4, HIGH);
  } else {
    digitalWrite(4, LOW);
  }
  delay(10); 
}