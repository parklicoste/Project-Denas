#ifndef BABYDOCTOR_H
#define BABYDOCTOR_H

#include<string>

class BabyDoctor
{
  string ageLimit;
public:
  BabyDoctor();
  BabyDoctor(string);
  ~BabyDoctor();
  int ageMenu(int&);
};
#endif
