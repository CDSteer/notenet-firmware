#ifndef SETTINGS_H
#define SETTINGS_H

class Settings{
  private:
    bool solid;
    bool flashing;
    bool breathing;
    int mode;
  public:
    Settings();
    ~Settings();
    bool isSolid();
    bool isFlashing();
    bool isBreathing();
    int setMode(int);
    int getMode();

};

#endif // !SETTINGS_H