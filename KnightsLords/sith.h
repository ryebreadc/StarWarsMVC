#include <string>
#include "forceBeing.h"
using namespace std;

class SithLord: public ForceBeing {
  private:
    bool evil;

  public:
    SithLord(int power_level, string characterName, bool evil) : ForceBeing(power_level, characterName) {
      setEvil();
    }

  private:
    void setEvil() {
      evil = true;
    }
};