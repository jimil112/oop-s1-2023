#include <iostream>

double weighted_average(int array[], int n) {
  if (n < 1) {
    return 0.0;
  }

  double mean = 0.0;  // Initialize mean to 0.0
  for (int i = 0; i < n; i++) {
    int check = 0;
    for (int j = 0; j < n; j++) {
      if (array[i] == array[j]) {
        check = check + 1;
      }
    }
    mean = mean + (double(array[i]) * check) / n;
  }
  return mean;
}
