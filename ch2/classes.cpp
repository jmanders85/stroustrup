#include <iostream>
using namespace std;

class Game {
  public:
    Game(char* name) :p{0}, name{name} { }
    void play() {
      cout << "...playing " << name << "..." << endl;
      ++p;
    }
    void printPlayCount()
    {
      cout << "I have played " << name << " " << p << " times." << endl;
    }
  private:
    int p;
    char* name;
};

int main()
{
  char chname[7] = "ConHex";
  Game conHex(chname);
  conHex.printPlayCount();
  conHex.play();
  conHex.play();
  conHex.printPlayCount();
}
