#ifndef VIEW_H
#define VIEW_H

#include "Timer.h"
class View
{
public:
      int mainMenu(int&);
      void detectElectrode(char&);
      void selectPower(int&);
      Timer setStopwatch();
      int changeLanguage(int&);
      int changeColour(int&);
};
#endif
