#include <iostream>

extern int is_ascending(int array[], int n);
int main() {
  int array[5] = {1, 2, 3, 4, 5};
  int n = sizeof(array) / sizeof(array[0]);

 bool outcome = is_ascending(array,n);

if (outcome == true) {
    std::cout << "true" << std::endl;
} else {
    std::cout << "false" << std::endl;
}


  return 0;
}