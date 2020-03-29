#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

#include "Control.h"
#include "Program.h"
#include "Frequency.h"
#include "BabyDoctor.h"
#include "Settings.h"


Control::Control()
{
}

Control::~Control()
{
}

void Control::launch()
{

  int menuSelection;
  while (1) {
      menuSelection = -1;
      v.mainMenu(menuSelection);

      if (menuSelection == 0)
        break;
      else if (menuSelection >= 1 && menuSelection <= 6) {
          // make a program or main menuSelection: status done
          //show menu in view: status done
          if (menuSelection == 1){// for PROGRAMS
            handleProgram();
          }
          else if(menuSelection == 2){//for FREQUENCY

            handleFrequency();

          }
          else if(menuSelection == 3){//for MED
            int medSelection;// for selecting meds
            // I guess it's just the timer
          }
          else if(menuSelection == 4){//for SCREENING
            int screeningSelection;// for selecting Screening
          }
          else if(menuSelection == 5){//for CHILDREN
            handleChildern();
          }
          else {// for SETTINGS
            handleSettings();
          }

      }
  }
}

void Control::handleProgram()
{
  int programSelection;// for selecting PROGRAMS
  Program p;
  while (1) {
    programSelection = -1;
    p.programMenu(programSelection);

    if (programSelection == 0)
      break;
    else if(programSelection == 1){}
    else if(programSelection == 2){}
    else if(programSelection == 3){}
    else if(programSelection == 4){}
    else if(programSelection == 5){}
    else if(programSelection == 6){}
    else if(programSelection == 7){}
    else if(programSelection == 8){}
    else if(programSelection == 9){}
    else if(programSelection == 10){}
    else if(programSelection == 11){}
    else {}
  }
}

void Control::handleFrequency()
{
  int frequencySelection;// for selecting Frequency
  Frequency f;
  while (1) {
    frequencySelection = -1;
    f.frequencyMenu(frequencySelection);

    if (frequencySelection == 0)
      break;
    else if(frequencySelection == 1){}
    else if(frequencySelection == 2){}
    else if(frequencySelection == 3){}
    else if(frequencySelection == 4){}
    else if(frequencySelection == 5){}
    else if(frequencySelection == 6){}
    else if(frequencySelection == 7){}
    else if(frequencySelection == 8){}
    else if(frequencySelection == 9){}
    else if(frequencySelection == 10){}
    else {}
  }
}

void Control::handleChildern()
{
  int ageSelection;// for selecting Childeren ages
  BabyDoctor b;
  while (1) {
    ageSelection = -1;
    b.ageMenu(ageSelection);

    if (ageSelection == 0)
      break;
    else if(ageSelection == 1){}
    else if(ageSelection == 2){}
    else if(ageSelection == 3){}
    else if(ageSelection == 4){}
    else {}
  }
}

void Control::handleSettings()
{
  int settingSelection;// for selecting Childeren ages
  Settings s;
  while (1) {
    settingSelection = -1;
    s.settingsMenu(settingSelection);

    if (settingSelection == 0)
      break;
    else if(settingSelection == 1){}
    else if(settingSelection == 2){}
    else if(settingSelection == 3){}
    else if(settingSelection == 4){}
    else {}
  }
}
