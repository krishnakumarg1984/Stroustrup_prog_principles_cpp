// Converts Yen, Euros & Pounds to Dollars
#include "../std_lib_facilities.h"

using namespace std;

int main() {
  for (int i = 0; i < 26; ++i) {
    cout << char('a' + i) << '\t' << int('a' + i) << endl;
  }
  for (int i = 0; i < 26; ++i) {
    cout << char('A' + i) << '\t' << int('A' + i) << endl;
  }
  return 0;
}
