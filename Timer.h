#ifndef TIMER_H
#define TIMER_H

#include "Electrode.h"
class Timer
{
  int hours;
  int minutes;
  int seconds;



public:
  Electrode  e;
  Timer();
  Timer(int , int, int);
  ~Timer();
  void displayClock();
  void stopwatch();
  void timer();


};
#endif
