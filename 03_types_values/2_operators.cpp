#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  cout << "Please enter a floating-point value: ";
  int mynumber;
  cin >> mynumber;
  double n = mynumber;
  cout << "n == " << n << "\nn+1 == " << n + 1 << "\nthree times n == " << 3 * n
       << "\ntwice n == " << n + n << "\nn squared == " << n * n
       << "\nhalf of n == " << n / 2 << "\nsquare root of n == " << sqrt(n)
       << '\n';  // another name for newline (“end of line”) in output
  return 0;
}
