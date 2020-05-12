#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

#include "Alarm.h"

Alarm::Alarm(){

}
Alarm::~Alarm(){

}

void Alarm::setAlarm(Timer t){
  alarm = t;
  cout<<"=========== ALARM SET AT TIME ==========\n";
  alarm.displayClock();

}
