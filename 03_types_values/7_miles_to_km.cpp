#include "std_lib_facilities.h"

using namespace std;

int main() {
  double miles{0};
  cout << "Enter the distance in miles: ";
  cin >> miles;
  cout << "This corresponds to " << 1.609 * miles << " kilometres\n";
  return 0;
}
