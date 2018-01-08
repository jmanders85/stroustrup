#include "std_lib_facilities.h"

int main()
{
  for (char letter = 'a'; letter <= 'z'; ++letter)
    cout << letter << '\t' << int(letter) << '\n';
}
