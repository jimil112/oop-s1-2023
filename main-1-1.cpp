#include <iostream>

#include "Person.h"

extern Person* createPersonArray(int n);  // External function declaration

int main() {
  int nums;

  std::cout
      << "Enter the number of times to repeat the person's name and age: ";
  std::cin >> nums;

  Person* arr = createPersonArray(nums);

  std::cout << "Names and ages:" << std::endl;
  for (int i = 0; i < nums; i++) {
    std::cout << arr[i].name << " " << arr[i].age << std::endl;
  }

  delete[] arr;

  return 0;
}
