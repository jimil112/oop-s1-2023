#ifndef PERSON_H
#define PERSON_H

#include <string>

// Defining struct Person.
struct Person {
    std::string name;
    int age;
};

// Defining struct PersonList.
struct PersonList {
    Person* people;
    int numPeople;
};

// Declare the function signature for creating a PersonList.
PersonList createPersonList(int numPersons);
PersonList deepCopyPersonList(PersonList pl);

#endif // PERSON_H
