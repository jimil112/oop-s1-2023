#include "Person.h"
using namespace std;

Person* createPersonArray(int n) {
  // Allocate memory for an array of Person pointers.
  Person* array = new Person[n];

  // Initialize each Person object in the array.
  for (int i = 0; i < n; i++) {
    array[i].name = "John Doe";
    array[i].age = 0;
  }

  // Return the initialized array.
  return array;
}
