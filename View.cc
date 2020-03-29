#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

#include "View.h"


int View :: mainMenu(int& selection)
{
    int numOptions = 6;

  cout << endl;
  cout << "(1) PROGRAMS" << endl;
  cout << "(2) FREQUENCY" << endl;
  cout << "(3) MED" << endl;
  cout << "(4) SCREENING" << endl;
  cout << "(5) CHILDREN" << endl;
  cout << "(6) SETTINGS" << endl;
  cout << "PRESS (0) TO TURN OFF" << endl;
  cout << endl;


  while (selection < 0 || selection > numOptions) {
    cout << "Enter your selection: ";
    cin  >> selection;
  }
  cout << string( 100, '\n' );
  return selection;

}
