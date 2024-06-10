const int trigPin = D3;
const int echoPin = D2;

int buzzer = D0;

long duration;
int distanceCm, distanceInch;

int rain = D6;
int button = D1;
void setup()
{

   Serial.begin(9600); 
      pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(rain,INPUT);
  pinMode(button,INPUT);
}
if(digitalRead(rain)==LOW)
{
   Serial.println("rain");
  digitalWrite(buzzer,HIGH);
 delay(500);
  digitalWrite(buzzer,LOW);
 delay(500);
  digitalWrite(buzzer,HIGH);
 delay(500);
  digitalWrite(buzzer,LOW);
 delay(500);
}
if(digitalRead(button)==HIGH)
{
  Serial.println("button");
  digitalWrite(buzzer,HIGH);
 delay(300);
  digitalWrite(buzzer,LOW);
 delay(300);
  digitalWrite(buzzer,HIGH);
 delay(300);
  digitalWrite(buzzer,LOW);
 delay(300);
}