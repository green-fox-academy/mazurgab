#ifndef GFA_COHORT_H
#define GFA_COHORT_H

#include <iostream>
#include <vector>
#include "Student.h"
#include "Mentor.h"


class Cohort
{
public:
    Cohort(const std::string &cohortName);

    void addStudent(Student*);
    void addMentor(Mentor*);
    void info();

protected:
    std::string _cohortName;
    std::vector <Student*> students;
    std::vector <Mentor*> mentors;

};


#endif //GFA_COHORT_H
