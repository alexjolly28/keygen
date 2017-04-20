long key=0;
long d1,d2,d3,d4,d5;
int i=0;
void setup() 
{
  Serial.begin(9600);
}

void loop()
{
 // while(i<20)
 
  {
  key = keygen();
  Serial.println(key);
  }
   
}

long keygen()
{
  d1=d2=d3=d4=d5=0;
  d1=random(1,9);
  d2=random(1,9);
  d3=random(1,9);
  d4=random(1,9);
  d5=random(1,9);
  key=((d1*1)+(d2*10)+(d3*100)+(d4*1000)+(d5*10000));
  // i= i+1;
  return key;

}

