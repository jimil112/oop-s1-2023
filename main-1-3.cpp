#include <iostream>

extern int num_count(int array[], int n, int number);
int main() {
  int array[7] = {1, 2, 2, 4, 5, 5, 7};
  int n = sizeof(array)/sizeof(array[0]);
  int number = 2;

  std::cout << "The number "<<number<< " appears "<< num_count(array, n, number) << " times." << std::endl;

  return 0;
}