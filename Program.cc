#include<iostream>
#include<iomanip>




#include "Program.h"

Program :: Program(){
}

Program :: Program(int x, string s){
  progNo = x;
  progName = s;

}


Program::~Program(){

}

int Program :: programMenu(int& selection)
{
  int numOptions = 12;

  cout << endl;
  cout << "(1) ALLERGYy" << endl;
  cout << "(2) PAIN" << endl;
  cout << "(3) INT. PAIN" << endl;
  cout << "(4) BLOATING" << endl;
  cout << "(5) DYSTONIA" << endl;
  cout << "(6) GYN. PAIN" << endl;
  cout << "(7) GYNECOLOGY" << endl;
  cout << "(9) HYPERTENSION" << endl;
  cout << "(10) HYPOTONIA" << endl;
  cout << "(11) HEAD" << endl;
  cout << "(12) THROAT" << endl;
  cout << "PRESS (0) TO GO BACK" << endl;
  cout << endl;

  while (selection < 0 || selection > numOptions) {
    cout << "Enter your selection: ";
    cin  >> selection;
  }
  cout << string( 100, '\n' );
  return selection;

}
