#include <iostream>

extern int max_element(int array[], int n);
int main() {
  int array[6] = {5, 2, 3, 4, 5, 6};
  int n = sizeof(array) / sizeof(array[0]);

  std::cout << "The largest element in the array is " << max_element(array, n)
            << std::endl;

  return 0;
}