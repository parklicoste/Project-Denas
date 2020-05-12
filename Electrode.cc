#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

#include"Electrode.h"

Electrode::Electrode(){

}

Electrode::Electrode(bool x){
  electrode = x;
}

Electrode::~Electrode(){

}

bool Electrode::getElectrode(){
  return electrode;
}

void Electrode::setElectrode(bool x){
  electrode = x;
}
