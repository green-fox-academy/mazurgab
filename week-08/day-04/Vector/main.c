#include <stdio.h>
#include "vector.h"

int main() {

    vector_t* vector = init_vector();
    push_back_vector(vector, 15);
    deinit_vector(vector);

    return 0;
}