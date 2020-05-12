#ifndef ALARM_H
#define ALARM_H

#include "Timer.h"
class Alarm
{
  Timer alarm;
  public:
    Alarm();
    ~Alarm();
    void setAlarm(Timer);

};
#endif
