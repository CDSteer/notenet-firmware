#include "BreatheLight.h"


BreatheLight::BreatheLight(){
    i = 0;
    d = 0;
    breatheRate = 10;
}
BreatheLight::~BreatheLight(){}

void BreatheLight::setBreatheRate(int rate){
    this->breatheRate = rate;
}
int BreatheLight::getBreatheRate(){
    return this->breatheRate;
}

int BreatheLight::breathe() {
    for(i = 15 ; i <= 255; i++){
        this->setBreathColor();
        d  = i/breatheRate;
        delay(d);
    }
    for(i = 255; i >=15; i--){
        this->setBreathColor();
        d  = i/breatheRate;
        delay(d);
    }
    delay(1000);
    return 0;
}

int BreatheLight::setBreathColor(){
    if (colour == "blue"){
        RGB.color(0, 0, i);
    } else if (colour =="red"){
        Serial.println(i);
        RGB.color(i, 0, 0);
    } else if (colour =="green"){
        RGB.color(0, i, 0);
    } else if (colour == "yellow"){
        RGB.color(i, i, 0);
    }
    return 0;
}

