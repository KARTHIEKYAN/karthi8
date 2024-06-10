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

void loop() {

 digitalWrite(buzzer,LOW);

  
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distanceCm= duration*0.034/2;
distanceInch = duration*0.0133/2;
  Serial.println(distanceCm);
  delay(500);
if(distanceCm<10)
{
 digitalWrite(buzzer,HIGH);
 delay(1000);
  digitalWrite(buzzer,LOW);
 delay(1000);
  digitalWrite(buzzer,HIGH);
 delay(1000);
  digitalWrite(buzzer,LOW);
 delay(1000);
}

 digitalWrite(buzzer,LOW);
}