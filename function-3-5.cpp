#include <iostream>

double sum_even(double array[], int n) {
  if (n < 1) {
    return 0.0;
  }

  double even_sum = 0.0;  // Change the data type to double

  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      even_sum += array[i];
    }
  }

  return even_sum;
}
