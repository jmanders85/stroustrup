#include <iostream>
using namespace std;

bool accept() {
  int tries{1};
  while (tries < 4) {
    cout << "Do you accept? (y/n): ";
    char answer = 0;
    cin >> answer;

    switch(answer) {
      case 'y':
        return true;
      case 'n':
        return false;
      default:
        cout << "I think you flubbed that a bit..." << endl;
        tries++;
    }
  }

  cout << "I give up!  I assume you just mean 'no'." << endl;
  return false;
}

int main() {
  cout << "Welcome to the accepting program." << endl;
  auto answer = accept();
  if (answer) {
    cout << "I knew you'd accept!" << endl;
  } else {
    cout << "Ahh... playin' hardball, I see..." << endl;
  }
}
