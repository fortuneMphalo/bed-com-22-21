#pragma once
#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    // Constructors
    Person();
    Person(string firstName, float weight, int age);
    //destructor 
    ~Person();

    // Overloaded operators with ==, !=, <, and >
    bool operator==(const Person& otherPerson) const;
    bool operator!=(const Person& otherPerson) const;
    bool operator>(const Person& otherPerson) const;
    bool operator<(const Person& otherPerson) const;
    float operator+(const Person& otherPerson) const;
    
    // Conversion operators
   operator int() const;
     operator string() const;
    operator float() const;

private:
    float mWeight;
    string mFirstName;
    int mAge; // Added mAge member variable
};

// Constructor definitions
Person::Person() : mWeight(0.0f), mFirstName(""), mAge(0) {}

Person::Person(string firstName, float weight, int age) : mWeight(weight), mFirstName(firstName), mAge(age) {}
//destructor definition
Person::~Person() {}

// Overloaded operator definitions
bool Person::operator==(const Person& otherPerson) const {
    return mAge == otherPerson.mAge;
}

bool Person::operator!=(const Person& otherPerson) const {
    return mAge != otherPerson.mAge;
}

bool Person::operator>(const Person& otherPerson) const {
    return mAge > otherPerson.mAge;
}

bool Person::operator<(const Person& otherPerson) const {
    return mAge < otherPerson.mAge;
}

float Person::operator+(const Person& otherPerson) const {
    return mWeight + otherPerson.mWeight;
}

// Conversion operator definitions
Person::operator int() const {
    return mAge;
}

Person::operator string() const {
    return mFirstName;
}

Person::operator float() const {
    return mWeight;
}

int main() {
   
    Person Jane = Person("Jane", 60.0f, 25);
    Person John = Person("John", 75.0f, 30);
    
    float totalWeight = Jane + John;
    cout << "Total weight: " << totalWeight << endl;

    if (Jane == John) {
        cout << "This is the same person." << endl;
    }
    if (Jane != John) {
        cout << "This is not the same person." << endl;
    }
    if (Jane < John) {
        cout << "Jane is younger than John." << endl;
    }
    if (John > Jane) {
        cout << "John is older  than Jane." << endl;
    }
    int johnAge = John;
    cout << "John's age is : " << johnAge << endl;
    string janeFirstName = Jane;
    cout << "Jane's firstName is : " << janeFirstName << endl;
    float janeWeight = Jane;
    cout << "Jane's weight is :  " << janeWeight << endl;
    return 0;
}
