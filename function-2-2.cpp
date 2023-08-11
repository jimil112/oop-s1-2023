#include <iostream>
using namespace std;

int bin_to_int(int binary_digits[], int number_of_digits) {

  int binary_sum = 0;

  for (int i = 0; i < number_of_digits; i++) {
    binary_sum = (binary_sum * 2) + binary_digits[i];
  }

  return binary_sum;
}