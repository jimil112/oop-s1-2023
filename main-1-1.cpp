#include <iostream>

extern int array_sum(int[], int);
int main() {
  int array[7] = {1, 2, 3, 4, 5, 6, 7};


  std::cout << "The sum of the array is: " << array_sum(array, 7) << std::endl;

  return 0;
}