#include "Game.h"
#include <iostream>
using namespace std;

Game::Game(char *name)
  :p{0}, name{name}
{
}

void Game::play()
{
  cout << "...playing " << name << "..." << endl;
  ++p;
}

void Game::printPlayCount()
{
  cout << "I have played " << name << " " << p << " times." << endl;
}
