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
  int numOptions = 8;

    cout << endl;
    cout << "(1) SOUND" << endl;
    cout << "(2) BRIGHTNESS" << endl;
    cout << "(3) ECONOMY" << endl;
    cout << "(4) RECORDING" << endl;
    cout << "(5) CLOCK" << endl;
    cout << "(6) ALARM" << endl;
    cout << "(7) LANGUAGE" << endl;
    cout << "(8) COLOUR" << endl;
    cout << "PRESS (0) TO GO BACK" << endl;
    cout << endl;


    while (selection < 0 || selection > numOptions|| cin.fail()){
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(),'\n');
      cout << "Enter your selection: ";
      cin  >> selection;
    }
    cout << string( 100, '\n' );
    return selection;

}
