#include <iostream>

extern int two_five_nine(int array[], int n);
int main() {
  int array[9] = {5, 5, 5, 2, 3, 2, 5, 9, 9};
  int n = sizeof(array) / sizeof(array[0]);

  two_five_nine(array, n);

  return 0;
}
