#ifndef GFA_SPONSOR_H
#define GFA_SPONSOR_H

#include "Person.h"
#include <string>

class Sponsor : public Person{
public:
    Sponsor(std::string name, int age, Gender gender, std::string company);
    Sponsor();


    void introduce() override;
    int hire();
    void getGoal() override;

protected:
    std::string _company;
    int _hiredStudents;
};


#endif //GFA_SPONSOR_H
