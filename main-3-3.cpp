#include <iomanip>  // For std::setprecision
#include <iostream>

extern double weighted_average(int array[], int n);

int main() {
  int array[5] = {1, 2, 3, 2, 1};
  int n = sizeof(array) / sizeof(array[0]);

  double mass = weighted_average(array, n);

  std::cout << std::fixed << std::setprecision(1)
            << "The weighted average is: " << mass << std::endl;

  return 0;
}
