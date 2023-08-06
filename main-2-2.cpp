#include <iostream>
using namespace std;

extern int binary_to_int(int binary_digits[], int number_of_digits);

int main() {
  int binary_digits[] = {1, 0, 1, 0, 1, 1};
  int number_of_binary_digits =
      sizeof(binary_digits) / sizeof(binary_digits[0]);

  cout << "Conversion from binary to decimal: "
       << binary_to_int(binary_digits, number_of_binary_digits) << endl;

  return 0;
}
