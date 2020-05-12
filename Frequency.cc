#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

#include "Frequency.h"


Frequency::Frequency(){
}

Frequency::Frequency(int x){
  freq = x;
}

Frequency::~Frequency(){

}

int Frequency :: frequencyMenu(int& selection)
{
    int numOptions = 11;

    cout << endl;
    cout << "(1) 1.0-9.99 Hz" << endl;
    cout << "(2) 10 Hz" << endl;
    cout << "(3) 20 Hz" << endl;
    cout << "(4) 60 Hz" << endl;
    cout << "(5) 77 Hz" << endl;
    cout << "(6) 125 Hz" << endl;
    cout << "(7) 140 Hz" << endl;
    cout << "(8) 200 Hz" << endl;
    cout << "(9) 7710" << endl;
    cout << "(10) 7720" << endl;
    cout << "(11) 77 AM" << endl;
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
