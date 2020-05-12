#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

#include "Control.h"
#include "Program.h"
#include "Frequency.h"
#include "BabyDoctor.h"
#include "Settings.h"
#include "Timer.h"
#include "Alarm.h"


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
          else if(menuSelection == 3 || menuSelection == 4){//for MED
            //set the timer for med or SCREENING
            Timer newT(0,0,0);
            newT.displayClock();
            newT = v.setStopwatch();
            int power;
            v.selectPower(power);
            if (power == 0) break;
            else runTimer(newT);
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
    else {
        Timer t(0,10,0);
        runTimer(t);
    }
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
    else {
      Timer t(0,10,0);
      t.displayClock();
      int power;
      v.selectPower(power);
      if (power == 0) break;
      else runTimer(t);
    }
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
    else if(ageSelection == 1){
      cout<<"CHILD MODE: DISABLED\n";
      break;
    }
    else if(ageSelection == 2){
      cout<<"CHILD MODE: UPTO 1 YEAR\n";
      break;
    }
    else if(ageSelection == 3){
      cout<<"CHILD MODE: 1 - 3 YEARS\n";
      break;
    }
    else if(ageSelection == 4){
      cout<<"CHILD MODE: 4 - 7 YEARS\n";
      break;
    }
    else {
      cout<<"CHILD MODE: 8 - 12 YEARS\n";
      break;
    }
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

    else if(settingSelection == 1){
          int sound;//SOUND LEVEL
          cout<<"Enter Sound Level: 0 to 6: ";
          cin>> sound;
          while(sound<0 || sound >6|| cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<"\nERROR: Wrong input\nTry again Sound level 0 to 6: ";
            cin>>sound;
          }
          cout<<"\n Sound Level is: "<<sound<<endl;
    }

    else if(settingSelection == 2 || settingSelection == 3){
            int bright;//for brightness
            if(settingSelection == 2){
              cout<<"Enter Brightness Level: 0 to 6: ";
              cin>> bright;
              while(bright<0 || bright >6|| cin.fail()){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout<<"\nERROR: Wrong input\nTry again Brightness level 0 to 6: ";
                cin>>bright;
              }

            }
            else{
              cout<<"Economy mode is ON \n";
              bright = 3;
            }
            cout<<"\nBrightness Level is: "<<bright<<endl;
    }

    else if(settingSelection == 4){
            Timer t;//for recording
            t.displayClock();
            char start;
            cout<<"Press Y or y to start recording\n";
            cout<<"Press any other Key to go back: ";
            cin>>start;
            if(start == 'Y' || start == 'y'){
              t.stopwatch();
            }
            else cout << string( 100, '\n' );
    }

    else if(settingSelection == 5){
      Timer time = v.setStopwatch();//clock
      time.stopwatch();
    }

    else if(settingSelection == 6){
      Alarm a;
      a.setAlarm(v.setStopwatch());
    }

    else if(settingSelection == 7){
          int langSelection = -1;
          v.changeLanguage(langSelection);
          if(langSelection == 0)continue;
          else if(langSelection == 1){
            cout<<"LANGUAGE MODE: RUSSIAN\n";
            //break;
          }
          else if(langSelection == 2){
            cout<<"LANGUAGE MODE: ENGLISH\n";
            //break;
          }
          else if(langSelection == 3){
            cout<<"LANGUAGE MODE: GERMAN\n";
            //break;
          }
          else if (langSelection == 4){
            cout<<"LANGUAGE MODE: FRANCIAS\n";
            //break;
          }
          else{
            cout<<"LANGUAGE MODE: ITALIAN\n";
            //break;
          }
    }
    else{
          int colourSelection = -1;
          v.changeColour(colourSelection);
          if(colourSelection == 0)continue;
          else if(colourSelection == 1){
            cout<<"COLOUR MODE: TURQUOISE\n";
            //break;
          }
          else if(colourSelection == 2){
            cout<<"COLOUR MODE: WINTER\n";
            //break;
          }
          else if(colourSelection == 3){
            cout<<"COLOUR MODE: BRONZE\n";
            //break;
          }
          else {
            cout<<"COLOUR MODE: NIGHT\n";
            //break;
          }
    }
  }
}

void Control::runTimer(Timer t){

  t.displayClock();
  char ele;
  v.detectElectrode(ele);
  if(ele == 'Y' || ele == 'y')
    t.e.setElectrode(true);
  else
    t.e.setElectrode(false);
  if(t.e.getElectrode() == true) t.timer();

}
