#include <iostream>

extern int median_array(int array[], int n);

int main() {
  int array[5] = {3, 5, 2, 1, 4};
  int n = sizeof(array) / sizeof(array[0]);

  int arraymed = median_array(array, n);

  std::cout << arraymed << std::endl;
  return 0;
}