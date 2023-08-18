#include "Person.h"

// Implementing the function createPersonList to populate a PersonList.
PersonList createPersonList(int n) {
  PersonList personList;

  personList.numPeople = n;
  personList.people = new Person[n];

  // Looping to set default names and ages.
  for (int i = 0; i < n; i++) {
    personList.people[i].name = "Jane Doe";
    personList.people[i].age = 1;
  }

  return personList;
}

// Implementing the function deepCopyPersonList to create a deep copy of a
// PersonList.
PersonList deepCopyPersonList(PersonList originalList) {
  PersonList copiedList;

  copiedList.numPeople = originalList.numPeople;
  copiedList.people = new Person[originalList.numPeople];

  // Looping to copy names and ages.
  for (int i = 0; i < originalList.numPeople; i++) {
    copiedList.people[i].name = originalList.people[i].name;
    copiedList.people[i].age = originalList.people[i].age;
  }

  return copiedList;
}
