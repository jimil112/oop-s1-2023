#include <iostream>

extern int is_descending(int array[], int n);
int main() {
  int array[5] = {5, 4, 3, 2, 1};
  int n = sizeof(array) / sizeof(array[0]);

 bool outcome = is_descending(array,n);

if (outcome == true) {
    std::cout << "true" << std::endl;
} else {
    std::cout << "false" << std::endl;
}


  return 0;
}