#include "colour.h"
#include "FlashingLight.h"
#include "NoteLight.h"
#include "BreatheLight.h"
#include "Settings.h"

Settings settings;
BreatheLight breatheLight;
NoteLight noteLight;
FlashingLight flashingLight;

void setup() {
    Spark.function("setLED", setLED);
    Spark.function("setMode", setMode);
    Spark.function("setFlashRate", setFlashRate);
    Spark.function("setBreatheRate", setBreatheRate);
    Spark.function("ping", ping);
    //Serial.begin(9600);
    settings = Settings();
    noteLight = NoteLight();
    breatheLight = BreatheLight();
    flashingLight = FlashingLight();
    RGB.control(true);
}

void loop() {
    if (settings.isSolid() == true){
        RGB.color(noteLight.getRed(), noteLight.getGreen(), noteLight.getBlue());
    } else if (settings.isFlashing() == true) {
        flashingLight.flash();
    } else if (settings.isBreathing() == true) {
        breatheLight.breathe();
    }
}

int setMode(String args){
    if (args == "solid"){
        settings.setMode(1);
    } else if (args == "flashing") {
        settings.setMode(2);
    } else if (args == "breathing") {
        settings.setMode(3);
    }
    return 0;
}

int setLED(String args){
    if (args != NULL){
        char hex[8];
        args.toCharArray(hex, 8);
        int rgb[3];
        hextorgb(hex, rgb);
        int r = rgb[0];
        int g = rgb[1];
        int b = rgb[2];
        noteLight.setColours(r,g,b);
    }
    return 0;
}

int setFlashRate(String args){
    int range = stringToInt(args);
    flashingLight.setFlashRate(range);
    return 0;
}

int setBreatheRate(String args){
    int range = stringToInt(args);
    breatheLight.setBreatheRate(range);
    return 0;
}

int stringToInt(String args){
    char msg[256];
    args.toCharArray(msg, 256);
    int range = atoi(msg);
    return range;
}
int ping(String args){
    return 0;
}