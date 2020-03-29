#ifndef PROGRAM_H
#define PROGRAM_H

#include<string>
using namespace std;

class Program
{
  string progName;
  int progNo;
public:
  Program();
  Program(int, string);
  ~Program();
  int programMenu(int& selection);

};
#endif
