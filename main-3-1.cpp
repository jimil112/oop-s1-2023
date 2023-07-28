#include <iostream>

extern bool is_fanarray(int array[], int n);
int main() {
  int array[5] = {1, 2, 3, 2, 1};
  int n = sizeof(array) / sizeof(array[0]);

  bool outcome = is_fanarray(array, n);

  if (outcome == true) {
    std::cout << "is a fan array" << std::boolalpha << std::endl;
  } else {
    std::cout << "not a fan array" << std::boolalpha << std::endl;
  }

  return 0;
}