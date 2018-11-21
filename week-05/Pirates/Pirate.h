#ifndef PIRATES_PIRATE_H
#define PIRATES_PIRATE_H

#include <string>
#include <vector>

class Pirate
{
public:
    Pirate(const std::string &name, bool hasWoodenLeg, int gold);

    const std::string &getName() const;

    bool isHasWoodenLeg() const;

    int getGold() const;

private:
    std::string _name;
    bool _hasWoodenLeg;
    int _gold;
};

#endif //PIRATES_PIRATE_H
