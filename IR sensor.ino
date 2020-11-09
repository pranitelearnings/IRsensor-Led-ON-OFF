int IRSensor = 2; //Sensor output pin to digital pin 2
int led1 = 3;// led 1 anode to digital pin 3
int led2 = 4;// led 2 anode to digital pin 4

void setup() 
{
  pinMode (IRSensor, INPUT); // declare IRsensor as Input
  pinMode (led1, OUTPUT); //led1 as output
   pinMode (led2, OUTPUT); //led2 as output
}
void loop()
{
 int statusSensor = digitalRead (IRSensor);//read the output logic of sensor
  if (statusSensor == 1)
  {  //led1 ON & led2 OFF
    digitalWrite(led1,HIGH);
    digitalWrite(led2, LOW);
  }
  else
  { //led2 ON & led1 OFF
    digitalWrite(led2, HIGH); 
    digitalWrite(led1, LOW);// 
  }
  }
   
