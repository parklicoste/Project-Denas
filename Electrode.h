#ifndef ELECTRODE_H
#define ELECTRODE_H

class Electrode
{
  bool electrode;
  public:
    Electrode();
    Electrode(bool);
    ~Electrode();
    bool getElectrode();
    void setElectrode(bool);
};
#endif
