#ifndef GFA_STUDENT_H
#define GFA_STUDENT_H

#include "Person.h"
#include <iostream>

class Student : public Person {
public:

    Student(std::string name, int age, Gender gender, std::string previousOrganization);
    Student();

    void getGoal() override;

    void introduce() override;

    int skipDays (int numberOfDays);

protected:
    std::string _previousOrganization;
    int _skippedDays;

};


#endif //GFA_STUDENT_H
