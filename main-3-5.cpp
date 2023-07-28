#include <iomanip>
#include <iostream>

extern double sum_even(double array[], int n);

int main() {
  double array[5] = {4, 3.4, 7, 7.7, 8};
  int n = sizeof(array) / sizeof(array[0]);

  double total = sum_even(array, n);

  std::cout << std::fixed << std::setprecision(1)
            << "The sum of the elements in even positions is " << total
            << std::endl;

  return 0;
}
