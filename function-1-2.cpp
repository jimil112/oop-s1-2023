#include <iostream>

using namespace std;

double array_mean(int array[], int n) {
  if (n < 1) {
    return 0;
  }

  double total = 0;
  for (int i = 0; i < n; i++) {
    total = total + array[i];
  }
  double average = (double)total / (double)n;

  return average;
}