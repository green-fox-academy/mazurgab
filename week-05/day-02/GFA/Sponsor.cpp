#include "Sponsor.h"
#include <iostream>

Sponsor::Sponsor(std::string name, int age, Gender gender, std::string company){
    _name = name;
    _age = age;
    _gender = gender;
    _company = company;
    _hiredStudents = 0;
}
Sponsor::Sponsor(){
    _company = "Google";
    _hiredStudents = 0;
}

void Sponsor::introduce(){
    std::cout<<"Hi, I'm "<<_name<<", a "<<_age<<" year old "<<getGender()<<" who represents "<<_company<<" and hired "<<_hiredStudents<<" students so far."<<std::endl;
}
int Sponsor::hire(){
    _hiredStudents += 1;
}
void Sponsor::getGoal(){
    std::cout<<"My goal is: Hire brilliant junior software developers."<<std::endl;
}