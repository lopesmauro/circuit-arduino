// C++ code
int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;

const int PinoSensor = 0;
const int Buzzer = 7;
int ValorSensor = 0;

void setup()
{
  pinMode(led1, OUTPUT); 
  pinMode(led2, OUTPUT); 
  pinMode(led3, OUTPUT); 
  pinMode(led4, OUTPUT); 
  pinMode(led5, OUTPUT);   
  Serial.begin(9600);
}

void loop()
{
  ValorSensor = analogRead(PinoSensor);
  Serial.print("Valor do sensor = ");
  Serial.println(ValorSensor);
  
	lightLed(ValorSensor, 21, led1);
	lightLed(ValorSensor, 104, led2);
	lightLed(ValorSensor, 154, led3);
	lightLed(ValorSensor, 186, led4);
	lightLed(ValorSensor, 237, led5);
}

void lightLed(int ValorSensor, int NumberTerm, int led){
  if(ValorSensor > NumberTerm && ValorSensor <= 358){
	digitalWrite(led,HIGH);  
  }else{
    digitalWrite(led,LOW);  
  }
  if(ValorSensor > 154 && ValorSensor <= 358){
	digitalWrite(Buzzer,HIGH);  
  }else {
    digitalWrite(Buzzer,LOW);  
  }  
}