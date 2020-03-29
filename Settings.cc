#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

#include "Settings.h"

Settings::Settings(){

}

Settings::~Settings(){

}

int Settings::settingsMenu(int& selection){
  int numOptions = 6;

cout << endl;
cout << "(1) SOUND" << endl;
cout << "(2) BRIGHTNESS" << endl;
cout << "(3) ECONOMY" << endl;
cout << "(4) RECORDING" << endl;
cout << "(5) CLOCK" << endl;
cout << "(6) ALARM" << endl;
cout << "(6) LANGUAGE" << endl;
cout << "(6) COLOUR" << endl;
cout << "PRESS (0) TO GO BACK" << endl;
cout << endl;


while (selection < 0 || selection > numOptions) {
  cout << "Enter your selection: ";
  cin  >> selection;
}

return selection;

}
