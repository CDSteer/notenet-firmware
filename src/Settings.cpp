#include "Settings.h"

Settings::Settings(){
    mode = 1;
    solid = false;
    flashing = false;
    breathing = false;
}
Settings::~Settings(){}


bool Settings::isSolid() {
    return this->solid;
}
bool Settings::isFlashing() {
    return this->flashing;
}
bool Settings::isBreathing() {
    return this->breathing;
}

int Settings::setMode(int args){
    mode = args;
    if (args == 1){
        this->solid = true;
        this->flashing = false;
        this->breathing = false;
    } else if (args == 2) {
        this->solid = false;
        this->flashing = true;
        this->breathing = false;
    } else if (args == 3) {
        this->solid = false;
        this->flashing = false;
        this->breathing = true;
    }
    return 0;
}

int Settings::getMode(){
    return this->mode;
}