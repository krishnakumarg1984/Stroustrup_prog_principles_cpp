// Converts Yen, Euros & Pounds to Dollars
#include "../std_lib_facilities.h"

using namespace std;

int main() {
  constexpr double dollars_per_euro = 1.11184;    // Value of 1 EUR in USD
  constexpr double dollars_per_jpy = 0.00920591;  // Value of 1 JPY in USD
  constexpr double dollars_per_gbp = 1.23103;     // Value of 1 GBP in USD
  double amount{1};
  char currency = ' ';

  cout << "Enter the amount followed by a single currency char (y,e or p): ";
  cin >> amount >> currency;
  if (currency == 'y') {
    cout << "The equivalent value in USD is: " << amount * dollars_per_jpy
         << endl;
  } else if (currency == 'e') {
    cout << "The equivalent value in USD is: " << amount * dollars_per_euro
         << endl;
  } else if (currency == 'p') {
    cout << "The equivalent value in USD is " << amount * dollars_per_gbp
         << endl;
  } else
    cout << "Invalid currency character. Please run the code again with "
            "correct input.\n";
  return 0;
}
