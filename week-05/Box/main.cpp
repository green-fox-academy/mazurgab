#include <iostream>
#include "box.h"

int main()
{
    // Create a class that represents a cuboid:
    // It should take its three dimensions as constructor parameters. For example: x: 5, y: 6, z: 15
    // It should have a method called `getSurface` that returns the cuboid's surface
    // It should have a method called `getVolume` that returns the cuboid's volume

    Box box (3, 4, 5);
    std::cout<<"The surface is: "<< box.getSurface()<<std::endl;
    std::cout<<"The volume is: "<<box.getVolume()<<std::endl;

    return 0;
}