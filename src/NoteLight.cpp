#include "NoteLight.h"

NoteLight::NoteLight(){
    colour = "";
    red = 0;
    green = 0;
    blue = 0;
}
NoteLight::~NoteLight(){}

int NoteLight::setColours(int r, int g, int b){
    this->red = r;
    this->green = g;
    this->blue = b;
    return 0;
}

void NoteLight::setRed(int red) {
    this->red = red;
}
int NoteLight::getRed() {
    return this->red;
}
void NoteLight::setGreen(int green) {
    this->green = green;
}
int NoteLight::getGreen() {
    return this->green;
}
void NoteLight::setBlue(int blue) {
    this->blue = blue;
}
int NoteLight::getBlue() {
    return this->blue;
}

int NoteLight::lightGreen(){
    this->red = 0;
    this->green = 255;
    this->blue = 0;
    return 0;
}
int NoteLight::lightRed(){
    this->red = 255;
    this->green = 0;
    this->blue = 0;
    return 0;
}
int NoteLight::lightBlue(){
    this->red = 0;
    this->green = 0;
    this->blue = 255;
    return 0;
}
int NoteLight::lightOff(){
    this->red = 0;
    this->green = 0;
    this->blue = 0;
    return 0;
}