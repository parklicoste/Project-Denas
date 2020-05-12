#include<iostream>
#include<iomanip>
#include<string>
#include<limits>
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
  cout << "PRESS ANYTHING ELSE TO TURN OFF" << endl;
  cout << endl;


  while (selection < 0 || selection > numOptions){
    //cin.clear();
    //cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout << "Enter your selection: ";
    cin  >> selection;
  }
  cout << string( 100, '\n' );
  return selection;

}

void View::detectElectrode(char& ele){
  cout<<"\nPlease apply the electrode to the body part:\n";
  cout<<"Press y or 'Y' if you have applied the electrode, press any other key to go back: ";
  cin>>ele;
  while(cin.fail()){
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cin>>ele;
  }
}

void View::selectPower(int& power){

  cout<<"\nPlease select the power from 1 to 10\n(0) to go back: \n";
  cin>>power;
  while(power < 0 || power > 10 || cin.fail()){
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout<<"ERROR: Wrong input\n";
    cout<< "Enter correct power from 1 to 10\n(0) to go back: \n";
    cin>>power;
  }

}

Timer View :: setStopwatch(){
  int h=0,m=0,s=0;
  cout<<"Enter the duration format hh:mm:ss max is 23:59:59\n";
  cout<<"\nHours 0-23: ";

  cin>>h;

  while(h<0 || h>23 || cin.fail()){
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout<<"\nERROR: wrong input\nEnter Hours again: ";
    cin>>h;
  }
  cout<<"\nMinutes 0-59: ";
  cin>>m;
  while(m<0 || m>59 || cin.fail()){
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout<<"\nERROR: wrong input\nEnter Minutes again: ";
    cin>>m;
  }
  cout<<"\nSeconds 0-59: ";
  cin>>s;
  while(s<0 || s>59 || cin.fail()){
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout<<"\nERROR: wrong input\nEnter Seconds again: ";
    cin>>s;
  }
  Timer newT(h,m,s);
  return newT;
}

int View::changeColour(int& selection){
  int numOptions = 4;

cout << endl;
cout << "(1) TURQUOISE" << endl;
cout << "(2) WINTER" << endl;
cout << "(3) BRONZE" << endl;
cout << "(4) NIGHT" << endl;
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

int View::changeLanguage(int& selection){
  int numOptions = 5;

cout << endl;
cout << "(1) RUSSIAN" << endl;
cout << "(2) ENGLISH" << endl;
cout << "(3) GERMAN" << endl;
cout << "(4) FRANCIAS" << endl;
cout << "(5) ITALIAN" << endl;
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
