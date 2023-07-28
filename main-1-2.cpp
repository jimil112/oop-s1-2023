#include <iostream>

extern double array_mean(int array[], int n);
int main() {
  int array[7] = {1, 2, 3, 4, 5, 6, 7};

  std::cout << "The average of the array is: " << array_mean(array, 7)
            << std::endl;

  return 0;
}