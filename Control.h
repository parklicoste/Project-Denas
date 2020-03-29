#ifndef CONTROL_H
#define CONTROL_H

#include "View.h"


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

};
#endif
