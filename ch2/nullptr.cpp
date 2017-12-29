#include <iostream>
using namespace std;

int count_x(char* p, char x)
{
  if (p == nullptr) return 0;
  int count = 0;
  for (; *p!=0; ++p)
    if (*p==x)
      ++count;
  return count;
}

int main()
{
  char letter[7] {'l','e','t','t','e','r',0}; // "letter"
  char* nothing = nullptr;
  cout << "t appears in nullptr " << count_x(nothing, 't') << " times" << endl;
  cout << "t appears in \"" << letter << "\" " << count_x(letter, 't') << " times" << endl;
}
