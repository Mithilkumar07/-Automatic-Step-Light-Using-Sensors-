/*
   Please Visit "Tronics Lk" YouTube Channel for More Tutorials
   Channel Link 👇
   https://www.youtube.com/channel/UCYJa3gs8q49-N3TLm-7ygUw?sub_confirmation=1
*/

int ir_Sensor = 2; // connect ir sensor module to Arduino pin 2
int ir_Sensor2 = 4; // connect ir sensor module to Arduino pin 2
//int buzzer = 8; // connect Buzzer to Arduino pin 8

void setup()
{
  Serial.begin(9600); // Start Serial Communication at 9600 Baud Rate

  pinMode(ir_Sensor, INPUT); // Declaring IR Sensor pin as a Input
 // pinMode(buzzer, OUTPUT); // Declaring Buzzer Pin as a Output
  pinMode (13, OUTPUT); 
  pinMode (11, OUTPUT);
  pinMode (12, OUTPUT); 
  //pinMode (13, OUTPUT);
}

void loop()
{

  int sensorStatus = digitalRead(ir_Sensor);
  int sensorStatus2 = digitalRead(ir_Sensor2);

  if (sensorStatus == 0 && sensorStatus2 == 1)
  {
   // digitalWrite(buzzer, HIGH); // Turn on Buzzer
    Serial.println("An Object is Detected.!"); // Print An Object is Detected.! on the serial monitor window
    digitalWrite(11, HIGH);
    delay(500);
     digitalWrite(12, HIGH);
    delay(500);   
    digitalWrite(13, HIGH);
    //delay(500);
  }

else if (sensorStatus == 1 && sensorStatus2 == 0)
  {
     digitalWrite(13, HIGH);
    delay(500);
     digitalWrite(12, HIGH);
    delay(500);
     digitalWrite(11, HIGH);
   // delay(500);
  }
else if (sensorStatus == 1 && sensorStatus2 == 1)
  {
    //digitalWrite(buzzer, LOW); // Turn off Buzzer
    Serial.println("No Objects were Detected.!"); // Print No Objects were Detected.! on the serial monitor window
    delay(500);
    digitalWrite(13, LOW);
    delay(500);
    digitalWrite(12, LOW);
    delay(500);
    digitalWrite(11, LOW);
  }
 else 
  {
     digitalWrite(13, HIGH);
     digitalWrite(12, HIGH);
     digitalWrite(11, HIGH);
  }
  delay(500);
}
