#ifndef FORCEBEING_H
#define FORCEBEING_H

#include <string>
using namespace std;

class ForceBeing {
  private:
    int power_level;
    string name;

  protected:
    ForceBeing() {
      setPowerLevel(0);
      setName("");
    }
    ForceBeing(int level) {
      ForceBeing();
      setPowerLevel(level);
    }
    ForceBeing(string characterName) {
      ForceBeing();
      setName(characterName);
    }
    ForceBeing(int level, string characterName) {
      ForceBeing();
      setPowerLevel(level);
      setName(characterName);
    }
    void setPowerLevel(int level) {
      power_level = level;
    } 
    void setName(string characterName) {
      name = characterName;
    }

  public:
    string getName() {
      return name;
    }
    int getPowerLevel() {
      return power_level;
  }
};

#endif