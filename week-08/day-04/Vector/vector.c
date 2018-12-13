#include <stdlib.h>
#include <stdio.h>
#include "vector.h"
#include <time.h>

vector_t* init_vector()
{
    vector_t* vector = (vector_t*)malloc(sizeof(vector_t));
    vector->elements = (int*)malloc(10 * sizeof(int));
    vector->size = 0;
    vector->capacity = 10;

    return vector;
}

void push_back_vector(vector_t* vector, int value)
{
    if(vector->size == vector->capacity){
        vector_t* vector = (vector_t*)realloc(vector, sizeof(vector) * 2);
        vector->capacity *= 2;
    }else{
        vector->elements[vector->size - 1] = value;
        vector->size++;
    }
}

void deinit_vector(vector_t* vector)
{
    free(vector->elements);
    free(vector);
}

void insert_vector(vector_t* vector, int value, int index){
    if(vector->size == vector->capacity){
        vector_t* vector = (vector_t*)realloc(vector, sizeof(vector) * 2);
        vector->capacity *= 2;
    }else{
        for (int i = 0; i <vector->size - index ; ++i) {
            vector->elements[vector->size - i + 1] = vector->elements[vector->size - i];
        }
        vector->elements[index + 1] = value;
        vector->size++;
    }
}

int get_size_vector(vector_t* vector){
    return vector->size;
}

int get_capacity_vector(vector_t* vector){
    return vector->capacity;
}

int is_empty_vector(vector_t* vector){
    return vector->size == 0 ? 1 : 0;
}

void pop_back_vector(vector_t* vector){
    vector->size--;
    if(vector->size == (vector->capacity/4)){
        vector_t* vector = (vector_t*)realloc(vector, sizeof(vector)/2);
        vector->capacity /= 2;
    }
}

int erase_vector(vector_t* vector, int index){
    if(index<1 || index>vector->size){
        puts("Invalid index\n");
        return 0;
    }else{
        for (int i = 0; i < vector->size - index - 1; ++i) {
            vector->elements[index + i] = vector->elements[index + i + 1];
        }
        vector->size--;
        printf("Succesfully deleted the element az index %d\n", index);
        return 1;
    }
}

int find_vector(vector_t* vector, int value){
    for (int i = 0; i <vector->size ; ++i) {
        if(vector->elements[i] == value){
            printf("Value found at index %d\n", i);
        }else{
            return -1;
        }
    }
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

    vector_t* vector2 = (vector_t*)malloc(sizeof(vector_t));
    vector2->elements = (int*)malloc(10 * sizeof(int));
    vector2->size = vector->size;
    vector2->capacity = vector->size;

    for (int i = 0; i <vector->size ; ++i) {
        push_back_vector(vector2, rand());
    }

    vector_t* vector3 = (vector_t*)malloc(sizeof(vector_t));
    vector3->elements = (int*)malloc(10 * sizeof(int));
    vector3->size = vector->size;
    vector3->capacity = vector->size;

    for (int j = 0; j < vector2->size; ++j) {
        push_back_vector(vector3, vector2->elements[j]);
    }

    bubbleSort(vector3, vector3->size);



}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(vector_t* vector, int n)
{
    int i, j;
    for (i = 0; i < n-1; i++){
        for (j = 0; j < n-i-1; j++){
            if (vector->elements[j] > vector->elements[j+1]){
                swap(&vector->elements[j], &vector->elements[j+1]);
            }
        }
    }
}
