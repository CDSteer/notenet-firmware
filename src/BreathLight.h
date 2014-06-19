#ifndef BREATHELIGHT_H
#define BREATHELIGHT_H
#include "NoteLight.h"

class BreatheLight: public NoteLight{
  private:
    int d;
    int i;
    int breatheRate;
  public:
    BreatheLight();
    ~BreatheLight();
    void setBreatheRate(int);
    int getBreatheRate();
    int breathe();
    int setBreathColor();
};

#endif // !BREATHELIGHT_H