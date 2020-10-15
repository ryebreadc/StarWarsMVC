#include <string>
#include "forceBeing.h"
using namespace std;

class JediKnight: public ForceBeing {
  private:
    bool evil;

  public:
    JediKnight(int power_level, string characterName, bool evil):ForceBeing(power_level, characterName) {
      setGood();
    }
  
  private:
    void setGood() {
      evil = false;
    }
};