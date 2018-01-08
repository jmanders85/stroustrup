#include "std_lib_facilities.h"

int main() {
  vector<string> dislikes = {"sour", "naughty", "work"};

  for (string i; cin >> i;) {
    bool disliked = false;

    for (string dislike : dislikes) {
      if (i == dislike) {
        disliked = true;
        cout << "BLEEP\n";
      }
    }

    if (!disliked) {
      cout << i << '\n';
    }
  }
}