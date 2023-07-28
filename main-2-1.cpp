#include <iostream>

extern int min_element(int array[], int n);
int main() {
  int array[6] = {5, 2, 3, 4, 5, 6};
  int n = sizeof(array) / sizeof(array[0]);

  std::cout << "The smallest element in the array is " << min_element(array, n)
            << std::endl;

  return 0;
}