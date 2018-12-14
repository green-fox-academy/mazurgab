#include <stdlib.h>
#include <stdio.h>
#include "vector.h"
#include <time.h>

vector_t* init_vector()
{
    vector_t* vector = (vector_t*)malloc(sizeof(vector_t));
    vector->elements = (int*)malloc(5 * sizeof(int));
    vector->size = 0;
    vector->capacity = 5;
    printf("Vector initialized with capacity: %d, no elements added yet.\n", vector->capacity);

    return vector;
}

void status_vector(vector_t* vector){
    for (int i = 0; i < vector->size ; ++i) {
        printf("Status: the vector's %d. element is: %d\n", i, vector->elements[i]);
    }
    printf("Status: the vector's size is: %d\n", vector->size);
    printf("Status: the vector's capacity is: %d\n", vector->capacity);
}


void push_back_vector(vector_t* vector, int value)
{
    if(vector->size == vector->capacity){
        vector->elements = (int*)realloc(vector->elements, (size_t) ((vector->capacity) * 2));
        vector->capacity *= 2;
        printf("The vector's current capacity is: %d\n", vector->capacity);
    }
    vector->elements[vector->size] = value;
    vector->size++;
    printf("Value(%d) added to vector at index: %d\n", value, vector->size);

}

void deinit_vector(vector_t* vector)
{
    free(vector->elements);
    free(vector);
    printf("Vector deleted from memory");
}

void insert_vector(vector_t* vector, int value, int index){
    if(vector->size == vector->capacity){
        vector->elements = (int*)realloc(vector->elements, (size_t) ((vector->capacity) * 2));
        vector->capacity *= 2;
    }
    for (int i = 0; i <vector->size - index ; ++i) {
        vector->elements[vector->size - i + 1] = vector->elements[vector->size - i];
    }
    vector->elements[index + 1] = value;
    vector->size++;

    printf("Value(%d) inserted at index(%d). Vector's current size is: %d, capacity is: %d.\n", value, index, vector->size, vector->capacity);
}

int get_size_vector(vector_t* vector){
    printf("The vector's size is: %d\n", vector->size);
    return vector->size;
}

int get_capacity_vector(vector_t* vector){
    printf("The vector's capacity is: %d\n", vector->capacity);
    return vector->capacity;
}

int is_empty_vector(vector_t* vector){
    if (vector->size == 0){
        printf("The vector is empty.\n");
    }else{
        printf("The vector has %d elements.\n", vector->size);
    }
    return vector->size == 0 ? 1 : 0;
}

void pop_back_vector(vector_t* vector){
    if(vector->size ==0){
        printf("Can't pop back, the vector is empty");
    }else{
        vector->size--;
        printf("The last element was deleted, the vector's new size is: %d\n", vector->size);
        if(vector->size == (vector->capacity/4)){
            vector->elements = (int*)realloc(vector->elements, (size_t) vector->capacity/2);
            vector->capacity /= 2;
            printf("The vector's new capacity is: %d\n", vector->capacity);
        }
    }
}

int erase_vector(vector_t* vector, int index){
    if(vector->size ==0){
        printf("Can't erase an element, the vector is empty");
        return -1;
    }else{
        if(index<0 || index>vector->size){
            puts("Invalid index\n");
            return 0;
        }else{
            if(vector->size == (vector->capacity/4)){
                vector->elements = (int*)realloc(vector->elements, (size_t) vector->capacity/2);
                vector->capacity /= 2;
                printf("The vector's new capacity is: %d\n", vector->capacity);
            }
            for (int i = 0; i < vector->size - index - 1; ++i) {
                vector->elements[index + i] = vector->elements[index + i + 1];
            }
            vector->size--;
            printf("Succesfully deleted the element az index %d\n", index);
            return 1;
        }
    }
}

int find_vector(vector_t* vector, int value){
    int index = 0;
    for (int i = 0; i <vector->size ; ++i) {
        if(vector->elements[i] == value){
            printf("Value found at index %d\n", i);
            index = i;
            return index;
        }
    }
    return -1;
}

vector_t* shuffle_vector(vector_t* vector){
    srand(time(NULL));

    for (int i = 0; i < vector->size; ++i) {
        int r = rand() % vector->size;
        int temp = 0;
        temp = vector->elements[r];
        int s = rand() % vector->size;
        if(s == r){
            if(s==0){
                vector->elements[0] = vector->elements[vector->size];
                vector->elements[vector->size] = temp;
            }else{
                vector->elements[s] = vector->elements[s - 1];
                vector->elements[s-1] = temp;
            }
        }else{
            vector->elements[r] = vector->elements[s];
            vector->elements[s] = temp;
        }
    }
    return vector;
}

vector_t* more_efficient_shuffle_vector(vector_t* vector){

    srand(time(NULL));
    vector_t* vector2 = (vector_t*)malloc(sizeof(vector_t));
    vector2->elements = (int*)malloc(5 * sizeof(int));
    vector2->size = 0;
    vector2->capacity = 5;

    for (int i = 0; i <vector->size ; ++i) {
        push_back_vector(vector2, rand());
    }

    vector_t* vector3 = (vector_t*)malloc(sizeof(vector_t));
    vector3->elements = (int*)malloc(5 * sizeof(int));
    vector3->size = 0;
    vector3->capacity = 5;

    for (int j = 0; j < vector2->size; ++j) {
        push_back_vector(vector3, vector2->elements[j]);
    }

    bubbleSort_vector(vector3, vector3->size);

    for (int k = 0; k < vector2->size; ++k){
        int index = find_vector(vector2, vector3->elements[k]);

        int temp = vector->elements[k];
        vector->elements[k] = vector->elements[index];
        vector->elements[index] = temp;

    }
    for (int i = 0; i < vector->size ; ++i) {
        printf("Shuffle: the vector's %d. element is: %d\n", i, vector->elements[i]);
    }
    return vector;
}

void swap_element_vector(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort_vector(vector_t* vector, int size)
{
    int i, j;
    for (i = 0; i < size-1; i++){
        for (j = 0; j < size-i-1; j++){
            if (vector->elements[j] > vector->elements[j+1]){
                swap_element_vector(&vector->elements[j], &vector->elements[j+1]);
            }
        }
    }
}
