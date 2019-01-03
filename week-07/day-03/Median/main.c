#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct group_heights{
    char group_name[20];
    int size;
    int height[100];
}group_heights_t;

int file_read(char* path, group_heights_t* array);

void sort(group_heights_t *arr);

char *median(group_heights_t *arr);

int main() {

    char* path = "../my_file.txt";
    group_heights_t array[100];
    file_read(path, array);
    printf("%s\n", array[0].group_name);
    printf("%d\n", array[0].size);
    for (int i = 0; i < array[0].size ; ++i) {
        printf("%d\n", array[0].height[i]);
    }
    printf("------------------------------------------\n");
    sort(array);
    for (int i = 0; i < array[0].size ; ++i) {
        printf("%d\n", array[0].height[i]);
    }
    printf("------------------------------------------\n");
    printf("The group where the meridian is the lowest: %s", median(array));
    return 0;
}

int file_read(char* path, group_heights_t* array){
    FILE *file_pointer;
    file_pointer = fopen(path, "r");

    int counter = 0;
    int i = 0;
    int j = 0;
    char line[100];

    if (file_pointer == NULL) {
        printf("Can't open the file!\n");
        return -1;
    } else {
        while (fgets((char *) line, sizeof(line), file_pointer) != NULL) {
            char *data = strtok(line, ":");
            strcpy(array[i].group_name, data);
            while (data != NULL) {
                data = strtok(NULL, ",");
                if (strtol(data, NULL, 10) != 0) {
                    array[i].height[j] = strtol(data, NULL, 10);
                }
                j++;
                counter++;
            }
            array[i].size = counter - 1;
            i++;
            j = 0;
            counter = 0;
        }
    }
    fclose(file_pointer);
}

void sort(group_heights_t *arr) {
    int i = 0, j = 0, temp = 0;
    for (i = 0; i < arr[i].size; i++) {
        for (j = 0; j < arr[i].size; j++) {
            for (int k = 0; k < arr[i].size - 1; ++k) {
                if (arr[i].height[k] > arr[i].height[j]) {
                    temp = arr[i].height[j];
                    arr[i].height[j] = arr[i].height[k];
                    arr[i].height[k] = temp;
                }
            }
        }
    }
}

char *median(group_heights_t *arr) {
    int even = 0, odd = 0, min = 0, index = 0;
    min = even;
    for (int i = 0; i < 4; ++i) {
        if (arr[i].size % 2 == 0) {
            even = (arr[i].height[arr[i].size / 2 - 1] + arr[i].height[arr[i].size / 2]) / 2;
            index = i;
            printf("%s : %d\n", arr[i].group_name, even);
        } else {
            odd = arr[i].height[arr[i].size / 2];
            index = i;
            printf("%s : %d\n", arr[i].group_name, odd);
        }
        if (odd < min) {
            min = odd;
        } else {
            min = even;
        }
    }
    return arr[index].group_name;
}