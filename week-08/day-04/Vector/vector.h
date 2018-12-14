#ifndef VECTOR_VECTOR_H
#define VECTOR_VECTOR_H

typedef struct vector{
    int size;
    int capacity;
    int* elements;
}vector_t;

vector_t* init_vector();
void status_vector(vector_t* vector);
void deinit_vector(vector_t* vector);
void push_back_vector(vector_t* vector, int value);
void insert_vector(vector_t* vector, int value, int index);
int get_size_vector(vector_t* vector);
int get_capacity_vector(vector_t* vector);
int is_empty_vector(vector_t* vector);
void pop_back_vector(vector_t* vector);
int erase_vector(vector_t* vector, int index);
int find_vector(vector_t* vector, int value);
vector_t* shuffle_vector(vector_t* vector);
vector_t* more_efficient_shuffle_vector(vector_t* vector);
void swap_element_vector(int *xp, int *yp);
void bubbleSort_vector(vector_t* vector, int size);

#endif //VECTOR_VECTOR_H
