#include "Cohort.h"

void Cohort::addStudent(Student* student) {
    students.push_back(student);
}

void Cohort::addMentor(Mentor* mentor) {
    mentors.push_back(mentor);
}

void Cohort::info() {
    std::cout<<"The "<<_cohortName<<" cohort has "<< students.size()<<" students and "<<mentors.size()<<" mentors."<<std::endl;
}

Cohort::Cohort(const std::string &cohortName) : _cohortName(cohortName), mentors(), students() {

}
