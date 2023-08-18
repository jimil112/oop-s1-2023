#include <iostream>

#include "Person.h"
using namespace std;

// Function to create a list of persons.
PersonList createPersonList(int n) {
  // Initialize the PersonList variable personList.
  PersonList personList;
  personList.numPeople = n;
  personList.people = new Person[n];  // Allocate memory for people array.

  // Set default name and age for each person.
  for (int i = 0; i < n; i++) {
    personList.people[i].name = "Jane Doe";
    personList.people[i].age = 1;
  }

  return personList;
}

// Function to create a shallow copy of a person list.
PersonList shallowCopyPersonList(PersonList pl) {
  // Initialize the PersonList variable shallowCopy.
  PersonList shallowCopy;

  shallowCopy.numPeople = pl.numPeople;

  // Perform a shallow copy of the people array.
  shallowCopy.people = pl.people;

  return shallowCopy;  // Return the shallowCopy.
}
