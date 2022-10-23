#include<LiquidCrystal.h>
LiquidCrystal lcd (12,11,5,4,3,2);
int irPin1=7;
int irPin2=8;
int count=0;
boolean state1 = true;
boolean state2 = true;
boolean insideState = false;
boolean outsideIr=false;
boolean isPeopleExiting=false;
int i=1;
void setup() 
{
   Serial.begin(9600);
   pinMode(irPin1, INPUT);
   pinMode(irPin2, INPUT);
   Serial.println("No of persons inside the room: 0");
   lcd.begin(16,16);
   lcd.print("Total: 0");
}

void loop() {
  
  if (digitalRead(irPin1) && i==1 && state1){
     outsideIr=true;
     delay(100);
     i++;
     state1 = false;
  }

   if (digitalRead(irPin2) && i==2 &&   state2){
     Serial.println("Entering into room");
     outsideIr=true;
     delay(100);
     i = 1 ;
     count++;
     Serial.print("No of persons inside the room: ");
     Serial.println(count);
     lcd.begin(16,16);
     lcd.print("Total: ");
     lcd.print(count);
     state2 = false;
  }

   if (digitalRead(irPin2) && i==1 && state2 ){
     outsideIr=true;
     delay(100);
     i = 2 ;
     state2 = false;
  }

  if (digitalRead(irPin1) && i==2 && state1 ){
     Serial.println("Exiting from room");
     outsideIr=true;
     delay(100);
     count--;
       Serial.print("No of persons inside the room: ");
       Serial.println(count);
       lcd.begin(16,16);
       lcd.print("Total: ");
       lcd.print(count);
     i = 1;
     state1 = false;
  }  

    if (!digitalRead(irPin1)){
     state1 = true;
    }

     if (!digitalRead(irPin2)){
     state2 = true;
    }
  
}
