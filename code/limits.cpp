#include <climits>
#include <iostream>
using namespace std;
int main() {
  int n_int = INT_MAX;
  short n_short = SHRT_MAX;
  long n_long = LONG_MAX;
  long long n_llong = LLONG_MAX;

  cout << "int is " << sizeof(int) << " bytes." << endl;
  cout << "short is " << sizeof(n_short) << " bytes." << endl;
  cout << "long is " << sizeof n_long << " bytes." << endl;
  cout << "longlong is " << sizeof n_llong << " bytes." << endl;
  cout << endl;

  cout << "Maximum vavlues:" << endl;
  cout << "int: " << n_int << endl;
  cout << "short: " << n_short << endl;
  cout << "long: " << n_long << endl;
  cout << "longlong: " << n_llong << endl;
  cout << endl;

  cout << "Minimum int value = " << INT_MIN << endl;
  cout << "Bits per bype = " << CHAR_BIT << endl;
  return 0;
}
