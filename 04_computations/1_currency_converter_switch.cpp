// Converts various currencies to Dollars
#include "../std_lib_facilities.h"

using namespace std;

int main() {
  constexpr double dollars_per_euro = 1.11184;    // Value of 1 EUR in USD
  constexpr double dollars_per_jpy = 0.00920591;  // Value of 1 JPY in USD
  constexpr double dollars_per_gbp = 1.23103;     // Value of 1 GBP in USD
  constexpr double dollars_per_rmb = 0.145059;    // Value of 1 RMB in USD
  constexpr double dollars_per_sek = 0.105087;    // Value of 1 SEK in USD
  double amount{1};
  char currency = ' ';

  cout << "Enter amount followed by a currency character (y, e, p, r or k): ";
  cin >> amount >> currency;

  switch (currency) {
    case 'y':
      cout << "The equivalent value in USD is: " << amount * dollars_per_jpy
           << endl;
      break;
    case 'e':
      cout << "The equivalent value in USD is: " << amount * dollars_per_euro
           << endl;
      break;
    case 'p':
      cout << "The equivalent value in USD is: " << amount * dollars_per_gbp
           << endl;
      break;
    case 'r':
      cout << "The equivalent value in USD is: " << amount * dollars_per_rmb
           << endl;
      break;
    case 'k':
      cout << "The equivalent value in USD is: " << amount * dollars_per_sek
           << endl;
      break;
    default:
      cout << "Invalid currency character. Please run the code again with "
              "correct input.\n";
  }

  return 0;
}
