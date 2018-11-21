#include "Student.h"
#include <iostream>

void Student::getGoal(){
    std::cout<<"My goal is: Be a junior software developer."<<std::endl;
}

void Student::introduce() {
std::cout<<"I'm "<<_name<< " , a " <<_age<< " year old "<<getGender()<< " from "<<_previousOrganization << " who skipped "<<_skippedDays<<" days from the course already."<<std::endl;
}

int Student::skipDays(int numberOfDays) {
    _skippedDays += numberOfDays;
    return 0;
}

Student::Student(std::string name, int age, Gender gender, std::string previousOrganization){
    _name = name;
    _age = age;
    _gender = gender;
    _previousOrganization = previousOrganization;
    _skippedDays = 0;
}

Student::Student(){
    _previousOrganization = "The School of Life";
    _skippedDays = 0;
}