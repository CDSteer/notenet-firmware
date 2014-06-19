#ifndef NOTELIGHT_H
#define NOTELIGHT_H
#include "application.h"

class NoteLight{
  protected:
    String colour;
    int red;
    int green;
    int blue;
  public:
    NoteLight();
    ~NoteLight();
    int setColours(int, int, int);
    void setRed(int);
    int getRed();
    void setGreen(int);
    int getGreen();
    void setBlue(int);
    int getBlue();
    int lightGreen();
    int lightRed();
    int lightBlue();
    int lightOff();
};

#endif // !NOTELIGHT_H