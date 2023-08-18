#include "Person.h"

// Function to create a PersonList with default values.
PersonList createPersonList(int numPersons) {
    // Initializing the PersonList.
    PersonList personList;
    personList.numPeople = numPersons;
    personList.people = new Person[numPersons];  // Allocating memory for Person objects.

    // Looping to set default names and ages.
    for (int i = 0; i < numPersons; i++) {
        personList.people[i].name = "Jane Doe";
        personList.people[i].age = 1;
    }

    return personList;  // Returning the populated PersonList.
}
