#ifndef GFA_PERSON_H
#define GFA_PERSON_H

#include <string>

enum class Gender
{
    MALE,
    FEMALE
};

class Person {
public:

    Person(std::string name, int age, Gender gender);

    Person();

    virtual void introduce();

    virtual void getGoal();

    std::string getGender();

protected:
    std::string _name;
    int _age;
    Gender _gender;
};


#endif //GFA_PERSON_H
