#include <stdio.h>
#include <stdint.h>

// Use the Computer struct, give values to the fields and print them out in the main!
// Use the Notebook struct, give values to the fields and print them out in the main!

struct Computer {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
};

typedef struct notebook{
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
} notebook_t;

int main()
{

    struct Computer computer;
    computer.cpu_speed_GHz = 2.66f;
    computer.ram_size_GB = 8;
    computer.bits = 64;
    printf("The computer's CPU size is: %f, RAM size: %d, bits: %d\n", computer.cpu_speed_GHz, computer.ram_size_GB, computer. bits);

    notebook_t notebook1;
    notebook1.cpu_speed_GHz = 2.66f;
    notebook1.ram_size_GB = 8;
    notebook1.bits = 64;
    printf("The computer's CPU size is: %f, RAM size: %d, bits: %d\n", notebook1.cpu_speed_GHz, notebook1.ram_size_GB, notebook1. bits);


    return 0;
}