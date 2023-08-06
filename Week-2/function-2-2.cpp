#include <iostream>
using namespace std;

int binary_to_int(int binary_digits[], int number_of_digits) {
  int outcome = 0;  

  for (int i = 0; i < number_of_digits; i++) {
    outcome = (outcome * 2) + binary_digits[i];
  }

  return outcome;
}