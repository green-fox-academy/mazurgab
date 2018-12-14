#include <stdio.h>
#include "vector.h"

int main() {

    vector_t* vector = init_vector();
    status_vector(vector);
    push_back_vector(vector, 1);
    push_back_vector(vector, 2);
    push_back_vector(vector, 3);
    push_back_vector(vector, 4);
    push_back_vector(vector, 5);
    status_vector(vector);
    push_back_vector(vector, 6);
    status_vector(vector);
    insert_vector(vector, 7, 3);
    status_vector(vector);
    get_size_vector(vector);
    get_capacity_vector(vector);
    is_empty_vector(vector);
    pop_back_vector(vector);
    status_vector(vector);
    erase_vector(vector, 4);
    status_vector(vector);
    find_vector(vector, 3);
    //shuffle_vector(vector);
    status_vector(vector);
    printf("--------------------------------------------\n");
    more_efficient_shuffle_vector(vector);
    deinit_vector(vector);

    return 0;
}