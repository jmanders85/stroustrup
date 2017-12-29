class Game {
  public:
    Game(char* name);
    void play();
    void printPlayCount();
  private:
    int p;
    char* name;
};
