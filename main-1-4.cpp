#include <iostream>

#include "Person.h"  // Include the necessary header file.
using namespace std;

// Function declarations.
extern PersonList shallowCopyPersonList(PersonList pl);
extern PersonList createPersonList(int n);

int main() {
  // Initialize the integer variable count and prompt the user to enter a
  // number.
  int count;
  cout << "Enter the number of times you want to create a person with name and "
          "age: ";
  cin >> count;

  // Initialize the original_array_list using the createPersonList function.
  PersonList original_array_list = createPersonList(count);

  // Print the names and ages from the original array list.
  cout << "The original array list is: " << endl;
  for (int i = 0; i < count; i++) {
    cout << original_array_list.people[i].name << " "
         << original_array_list.people[i].age << endl;
  }

  // Initialize the shallow_array_list using the shallowCopyPersonList function.
  PersonList shallow_array_list = shallowCopyPersonList(original_array_list);

  // Print the names and ages from the shallow array list.
  cout << "The shallow array list is:" << endl;
  for (int i = 0; i < count; i++) {
    cout << shallow_array_list.people[i].name << " "
         << shallow_array_list.people[i].age << endl;
  }

  return 0;
}
