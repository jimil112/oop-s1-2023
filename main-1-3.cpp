#include <iostream>

#include "Person.h"
using namespace std;

int main() {
  int numbers;

  cout << "Enter the number of times to repeat the person's name and age: ";
  cin >> numbers;

  PersonList originalList = createPersonList(numbers);

  std::cout << "Names and ages:" << std::endl;

  cout << "Original array list: " << endl;
  for (int i = 0; i < numbers; i++) {
    cout << originalList.people[i].name << " " << originalList.people[i].age
         << endl;
  }

  PersonList copiedList = deepCopyPersonList(originalList);

  cout << "Copied list of the array: " << endl;
  for (int i = 0; i < numbers; i++) {
    cout << copiedList.people[i].name << " " << copiedList.people[i].age
         << endl;
  }

  delete[] originalList.people;
  delete[] copiedList.people;

  return 0;
}
