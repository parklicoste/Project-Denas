#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

#include "BabyDoctor.h"

BabyDoctor::BabyDoctor(){

}

BabyDoctor::BabyDoctor(string s){
  ageLimit = s;
}

BabyDoctor::~BabyDoctor(){

}

int BabyDoctor::ageMenu(int& selection){
int numOptions = 6;

cout << endl;
cout << "(1) DISABLE" << endl;
cout << "(2) UPTO 1 YEAR" << endl;
cout << "(3) 1 - 3 YEARS" << endl;
cout << "(4) 4 - 7 YEARS" << endl;
cout << "(5) 8 - 12 YEARS" << endl;
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
