#include <iostream>

#include "Person.h"

int main() {
  int count;

  // Prompting the user to enter the count.
  std::cout
      << "Enter the number of times to repeat the person's name and age: ";
  std::cin >> count;

  PersonList personArray = createPersonList(count);
  std::cout << "Names and ages:" << std::endl;
  // Printing the names and ages.
  for (int i = 0; i < count; i++) {
    std::cout << personArray.people[i].name << " " << personArray.people[i].age
              << std::endl;
  }

  delete[] personArray.people;

  return 0;
}
