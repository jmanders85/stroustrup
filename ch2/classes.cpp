#include "Game.h"

int main()
{
  char chname[7] = "ConHex";
  Game conHex(chname);
  conHex.printPlayCount();
  conHex.play();
  conHex.play();
  conHex.printPlayCount();
}
