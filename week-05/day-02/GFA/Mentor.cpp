#include <iostream>
#include "Mentor.h"

std::string Mentor::getLevel(){

    switch(_level){
        case Level::JUNIOR:
            return "junior";
        case Level::INTERMEDIATE:
            return "intermediate";
        case Level::SENIOR:
            return "senior";
    }
}

void Mentor::introduce(){
    std::cout<<"Hi, I'm "<<_name<<" a "<<_age<<" year old "<<getGender() << ", "<<getLevel()<<" mentor."<<std::endl;

}

void Mentor::getGoal() {
    std::cout<<"My goal is: Educate brilliant junior software developers."<<std::endl;
}

Mentor::Mentor(std::string name, int age, Gender gender, Level level){
    _name = name;
    _age = age;
    _gender = gender;
    _level = level;
}
Mentor::Mentor(){
        _level = Level::INTERMEDIATE;
}