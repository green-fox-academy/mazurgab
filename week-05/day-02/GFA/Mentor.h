#ifndef GFA_MENTOR_H
#define GFA_MENTOR_H

#include "Person.h"

enum class Level
{
    JUNIOR,
    INTERMEDIATE,
    SENIOR
};

class Mentor : public Person{

public:

    Mentor(std::string name, int age, Gender gender, Level level);
    Mentor();

    std::string getLevel();

    void introduce() override;

    void getGoal() override;

protected:
    Level _level;

};


#endif //GFA_MENTOR_H
