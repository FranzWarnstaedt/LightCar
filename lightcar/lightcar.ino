
 
int enA = 9;
int in1 = 8;
int in2 = 7;
 
int enB = 3;
int in3 = 5;
int in4 = 4;

int LightSensor = A0;
int LightSensorValue = 0;


void setup() {

  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

}


void AlignVehicle() {

  
}

void loop() {

  LightSensorValue = analogRead(LightSensor);
  
  

}
