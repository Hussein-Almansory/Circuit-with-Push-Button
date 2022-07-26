int state1 =0;
int state2 =0;
int dc1 = 5;
int dc2 = 6;
int push1 = 7;
int push2 = 4;


void setup()
{
 pinMode(dc1,OUTPUT);
 pinMode(dc2,OUTPUT);
 pinMode(push1,INPUT);
 pinMode(push2,INPUT);
 
}
void loop()
{
 state1 = digitalRead(push1); 
 state2 = digitalRead(push2);
  
 if (state1 == 1)
 {
   digitalWrite(dc1,0);
   digitalWrite(dc2,1);
 }
 else
 {
   digitalWrite(dc1,0);
   digitalWrite(dc2,0);
 }
 
 if (state2 == 1)
 {
   digitalWrite(dc1,1);
   digitalWrite(dc2,0);
 }
 else
 {
   digitalWrite(dc1,0);
   digitalWrite(dc2,0);
 }
  
  
  
}