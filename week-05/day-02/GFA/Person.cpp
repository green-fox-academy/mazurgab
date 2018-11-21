#include <iostream>
#include "Person.h"


Person::Person(std::string name, int age, Gender gender) : _name(name), _age(age), _gender(gender) {}

Person::Person() {
    _name = "Jane Doe";
    _age = 30;
    _gender = Gender::FEMALE;
}

std::string Person::getGender(){

    switch(_gender){
        case Gender::MALE:
            return "male";
        case Gender::FEMALE:
            return "female";
    }
}

void Person::introduce() {
    std::cout << "Hi my name is " << _name << ", a " << _age << " old " << getGender() << "." << std::endl;
}

void Person::getGoal() {
    std::cout<<"My goal is: Live for the moment!"<<std::endl;
}

