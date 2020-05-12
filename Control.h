#ifndef CONTROL_H
#define CONTROL_H

#include "View.h"
#include "Timer.h"

class Control
{
  View v;

  public:
        Control();
        ~Control();
        void launch();
        void handleProgram();
        void handleFrequency();
        void handleChildern();
        void handleSettings();
        void runTimer(Timer);

};
#endif
