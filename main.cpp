#include <iostream>
#include "Controller/controller.h"

int main() {
  Controller controller;
  controller.updateView(
    controller.modelJediKnightRecord(),
    controller.modelSithLordRecord()
  );
}