#include "../Model/model.h"
#include "../View/view.h"
using namespace std;


class Controller {
  private:
    Model model;
    View view;

  public:
    string modelJediKnightRecord() {
      return model.JediKnightRecord();
    }
    string modelSithLordRecord() {
      return model.SithLordRecord();
    }
    void updateView(string JediKnight, string SithLord) {
      view.printRecord(JediKnight);
      view.printRecord(SithLord);
    }
};