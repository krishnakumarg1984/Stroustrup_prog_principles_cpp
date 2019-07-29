#include "std_lib_facilities.h"

using namespace std;

int main() {
  double first_num, second_num;
  cout << "Enter the 1st number: ";
  cin >> first_num;
  cout << "Enter the 2nd number: ";
  cin >> second_num;
  if (first_num == second_num) {
    cout << "The two numbers are equal\n";
  } else if (first_num < second_num) {
    cout << "The smaller number is: " << first_num << endl;
  } else {
    cout << "The smaller number is: " << second_num << endl;
  }
  cout << "Their sum is: " << first_num + second_num << endl;
  cout << "first-second is: " << first_num - second_num << endl;
  cout << "Their product is: " << first_num * second_num << endl;
  cout << "(First Number)/(Second Number) is: " << first_num / second_num
       << endl;
  return 0;
}
