#include "WProgram.h"
#include "engine.h"

engine::engine(Servo *s,Servo *e){
  servo = s;
  esc = e;
}

void engine::init(){
  straight();
  forward(90);
}

void engine::forward(int speed){
  esc->write(speed);
}

void engine::right(){
  servo->write(130);
}

void engine::left(){
  servo->write(70);
}

void engine::straight(){
  servo->write(100);
}

void engine::turnRaw(int angle){
#ifdef DEBUG
  Serial.print("Angle ");
  Serial.println(angle);
#endif

  servo->write(angle);
}
