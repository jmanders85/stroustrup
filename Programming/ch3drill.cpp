#include "std_lib_facilities.h"

int main()
{
  cout << "Enter the name of the person you want to write to\n";
  string first_name;
  cin >> first_name;
  cout << "Enter the name of a friend\n";
  string friend_name;
  cin >> friend_name;
  cout << "What is the sex of your friend (m/f)\n";
  char friend_sex = 0;
  cin >> friend_sex;
  cout << "Dear " << first_name << ",\n";
  cout << "\tI'm writing you this awesome letter.  I hope it finds you well."
       << "  Have you seen " << friend_name << " lately?"
       << "  If you see " << friend_name << " please ask ";
  if (friend_sex == 'm') {
    cout << "him ";
  } else if (friend_sex == 'f') {
    cout << "her ";
  } else {
    cout << "them ";
  }
  cout << "to call me.\n";
}