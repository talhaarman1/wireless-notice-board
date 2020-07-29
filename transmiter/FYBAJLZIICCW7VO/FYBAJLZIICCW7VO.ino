
#include <VirtualWire.h>

char msg[1000];
int i=0;
void setup()
{
Serial.begin(9600); 
vw_setup(2000); 
Serial.print("End with \".\" each data");
}
void loop()
{
if( Serial.available() > 0)
{
msg[i] = Serial.read(); 
i++;
}
if( msg[i-1] == '.')
{
msg[i-1] = '\0'; 
i=0;
vw_send((byte *)msg, strlen(msg)); 
delay(100);
}
}
