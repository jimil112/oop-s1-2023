#include <iostream>

extern int count_evens(int number);
int main() {
  int number = 9;

    std::cout << "There are total " << count_evens(number) << " even numbers between 1 and " << number << std::endl;
  return 0;
}