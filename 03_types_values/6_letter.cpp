#include "std_lib_facilities.h"

using namespace std;

int main() {
  string first_name;
  cout << "Enter the name of the person you want to write to\n";
  cin >> first_name;

  string friend_name;
  cout << "Enter name of a friend\n";
  cin >> friend_name;

  char friend_sex{0};
  cout << "Enter 'm' if friend is male. Enter 'f' if female: \n";
  cin >> friend_sex;

  int age;
  cout << "Enter age of the recipient: ";
  cin >> age;
  if (age <= 0 || age >= 110) {
    simple_error("you are kidding!");
  }

  cout << "Dear " << first_name << ",\n";
  cout << "\tHow are you? I am fine. I am right now a post-doc.\n";
  cout << "I hear you just had a birthday and you are " << age
       << " years old.\n";
  if (age < 12) {
    cout << "Next year you will be " << age + 1 << ".\n";
  }
  if (age == 17) {
    cout << "Next year you will be able to vote.\n";
  }
  if (age > 70) {
    cout << "I hope you are enjoying retirement.\n";
  }
  cout << "Have you seen " << friend_name << " lately?\n";
  if (friend_sex == 'm') {
    cout << "If you see " << friend_name << " please ask him to contact me.\n";
  }
  if (friend_sex == 'f') {
    cout << "If you see " << friend_name << " please ask her to contact me.\n";
  }
  cout << "Please keep in touch.\n";
  cout << "\nYours Sincerely\n\n\n";
  cout << "Krishnakumar Gopalakrishnan\n";
  return 0;
}
