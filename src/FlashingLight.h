#ifndef FLASHINGLIGHT_H
#define FLASHINGLIGHT_H
#include "NoteLight.h"

class FlashingLight: public NoteLight{
  private:
    int flashRate;
  public:
    FlashingLight();
    ~FlashingLight();
    void setFlashRate(int);
    int getFlashRate();
    int flash();
};

#endif // !FLASHINGLIGHT_H