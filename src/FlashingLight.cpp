#include "FlashingLight.h"

FlashingLight::FlashingLight(){
    flashRate = 800;
}
FlashingLight::~FlashingLight(){}

void FlashingLight::setFlashRate(int rate){
    this->flashRate = rate;
}
int FlashingLight::getFlashRate(){
    return this->flashRate;
}

int FlashingLight::flash(){
    RGB.color(red, green, blue);
    delay(flashRate);
    RGB.color(0, 0, 0);
    delay(flashRate);
    return 0;
}