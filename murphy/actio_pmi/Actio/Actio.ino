//#include "../lib/Period.h"
#include "pins.h"
#include "OrdersRaspberry.h"
#include <pnew.cpp>

IO* io;
OrdersRaspberry* com;

void setup()
{

  attachInterrupt(PIN_ODO_INC, inc_tic_odo, RISING);         
  attachInterrupt(PIN_COULEUR, inc_pulse_color, RISING);         
  Serial.begin(9600);
  io = new IO();
  com = new OrdersRaspberry(io);
  Serial.println("#ACTIO READY");

}



void loop(){
    com->run();
    io->run();
}

