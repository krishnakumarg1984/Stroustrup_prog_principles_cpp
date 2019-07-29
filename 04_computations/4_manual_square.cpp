// Converts Yen, Euros & Pounds to Dollars
#include "../std_lib_facilities.h"

using namespace std;

int mySquare(const int n) {
  int result = 0;
  for (int i = 0; i < n; ++i) {
    result += n;
  }
  return result;
}

int main() {
  for (int i = 0; i < 100; ++i) {
    cout << i << "\t" << mySquare(i) << endl;
  }
}
