#include <string>
#include "../KnightsLords/forceBeing.h"
#include "../KnightsLords/jedi.h"
#include "../KnightsLords/sith.h"
using namespace std;

class Model {
  private:
    JediKnight Luke = JediKnight(150, "Luke Skywalker", false);
    SithLord Vader = SithLord(180, "Darth Vader", true);

  public:
    string JediKnightRecord() {
      return Luke.getName();
    }
    string SithLordRecord() {
      return Vader.getName();
    }
};