#include <LiquidCrystal.h>
LiquidCrystal lcd(A0, A1, A2, A3, A4, A5);
#include <Servo.h>

Servo myservol;

int ir_sl = 2;
int ir_s2 = 4;

int Total = 5;
int space;

int flag1 = 0;
int flag2 = 0;

void setup() {
pinMode(ir_sl, INPUT);
pinMode(ir_s2, INPUT);

myservol.attach(3);
myservol.write(100);

lcd.begin(16, 2);
lcd.setCursor (0,0);
lcd.print(" Car Parking ");
lcd.setCursor (0,1);
lcd.print(" System ");
delay (2000);
lcd.clear();

space = Total;
}

void loop(){

if(digitalRead (ir_sl) == LOW && flag1==0){
if(space>0){flag1=1;
if(flag2==0){myservol.write(0); space = space-1;}
}else{
lcd.setCursor (0,0);
lcd.print(" sorry not space ");
lcd.setCursor (0,1);
lcd.print(" Available ");
delay(1000);
lcd.clear();
}
}


if(digitalRead (ir_s2) == LOW && flag2==0){flag2=1;
if(flag1==0){myservol.write(0); space =space+1;}
}

if(flag1==1 && flag2==1){
 delay(1000);
myservol.write(100);
flag1=0, flag2=0;
}

lcd.setCursor (0,0);
lcd.print(" Total space: ");
lcd.print(Total);

lcd.setCursor (0,1);
lcd.print(" Have space: ");
lcd.print(space);
}
