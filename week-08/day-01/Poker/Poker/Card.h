#ifndef POKER_POKER_H
#define POKER_POKER_H

#include <string>


enum class Suit{
    C,
    D,
    H,
    S
};

enum class Value{
    v2 = 2,
    v3 = 3,
    v4 = 4,
    v5 = 5,
    v6 = 6,
    v7 = 7,
    v8 = 8,
    v9 = 9,
    vT = 10,
    vJ = 11,
    vQ = 12,
    vK = 13,
    vA = 14
};


class Card{
public:
    Card(Suit suit, Value value);

private:
    Suit _suit;
    Value _value;
};

#endif //POKER_POKER_H
