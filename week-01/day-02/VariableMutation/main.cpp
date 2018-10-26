#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    int a = 3;
    a += 10;
    // make the "a" variable's value bigger by 10

    std::cout << a << std::endl;

    int b = 100;
    b -= 7;
    // make b smaller by 7

    std::cout << b << std::endl;

    int c = 44;
    c *=2;
    // please double c's value

    std::cout << c << std::endl;

    int d = 125;
    d /= 5;
    // please divide by 5 d's value

    std::cout << d << std::endl;

    int e = 8;
    e *= e * e;
    // please cube of e's value

    std::cout << e << std::endl;

    int f1 = 123;
    int f2 = 345;
    bool bigger = false;
    if(f1>f2){bigger = true; }
        std::cout << std::boolalpha << bigger << std::endl;
    // tell if f1 is bigger than f2 (print as a boolean)

    int g1 = 350;
    int g2 = 200;
    bool biggerg = false;
    if (g2 * 2 > g1) {biggerg = true;}
    std::cout << std::boolalpha << biggerg << std::endl;
    // tell if the double of g2 is bigger than g1 (print as a boolean)

    int h = 135798745;
    bool divide = false;
    if (h % 11 == 0) {divide = true;}
    std::cout << std::boolalpha << divide << std::endl;
    // tell if it has 11 as a divisor (print as a boolean)

    int i1 = 10;
    int i2 = 3;
    bool higher = false;
    if (i1 > i2 * i2 && i1 < i2 * i2 * i2) {higher = true;}
    std::cout << std::boolalpha << higher << std::endl;
    // tell if i1 is higher than i2 squared and smaller than i2 cubed (print as a boolean)

    int j = 1521;
    bool dividable = false;
    if (j % 3 == 0 || j % 5 == 0) {dividable = true;}
    std::cout << std::boolalpha << dividable << std::endl;
    // tell if j is dividable by 3 or 5 (print as a boolean)

    std::string k = "Apple";
    std::cout << k << " " << k << " " << k << " " <<k << std::endl;
    //fill the k variable with its content 4 times

    return 0;
}