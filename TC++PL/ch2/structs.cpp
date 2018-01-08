#include <iostream>
using namespace std;

struct Game {
  char* name;
  double rating;
};

struct Collection {
  Game* games;
};

void game_init(Game& g, char* name, double rating)
{
  g.name = name;
  g.rating = rating;
}

int main() {
  Game conhex, parade;
  char conhexName[7] = "ConHex";
  char paradeName[7] = "Parade";
  game_init(conhex, conhexName, 9.2);
  game_init(parade, paradeName, 8.3);
  Collection c;
  c.games = new Game[2];
  c.games[0] = conhex;
  c.games[1] = parade;

  for (int i = 0; i!=2; ++i)
    cout << (i+1) << ". " << c.games[i].name << " - " << c.games[i].rating << endl;
}