double channel2;
double min_num2 = 927;
double max_num2 = 2111;

double channel3;
double min_num3 = 905;
double max_num3 = 2097;

int output2;
int output3;

void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  Serial.begin(9600);
}

void loop() {
  
  channel2 = pulseIn(2, HIGH);
  channel3 = pulseIn(3, HIGH);
  
  output2 = map(channel2, min_num2, max_num2, 0, 200);
  output3 = map(channel3, min_num3, max_num3, 0, 200);
  
//  output2 = output2/100;
//  output3 = output3/100;
  
  output2 = constrain(output2, 0, 200);
  output3 = constrain(output3, 0, 200);
  Serial.print(output2);
  Serial.print(" ");
  Serial.println(output3);
//  delay(20); //match this with delay on receiving side so receing side will always be faster
  

}
