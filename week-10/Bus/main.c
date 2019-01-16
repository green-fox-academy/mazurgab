#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct bus{
    int id;
    char name[20];
    int seats;
    int standing_places;
    int number_of_passangers;
}bus_t;

int read_size(char* filename);
int read_file(char* filename, bus_t* bus);
void get_on(int passengers, bus_t* bus, int id);

int main() {

    char* filename = "../bus.txt";
    int size = read_size(filename);
    bus_t* bus = (bus_t*) malloc (size * sizeof(bus_t));
    read_file(filename, bus);
    /*for (int i = 0; i < size; ++i) {
        printf("%s, %d, %d\n", bus[i].name, bus[i].seats, bus[i].standing_places);
    }*/
    int id = 5;
    get_on(100, bus, id);

    free(bus);
    return 0;
}

int read_size(char* filename) {
    FILE *fp;
    fp = fopen(filename, "r");

    int counter = 0;
    char line[50];

    if (fp == NULL) {
        printf("Can't open the file");
        return -1;
    } else {
        while (fgets((char *) line, sizeof(line), fp) != NULL) {
            counter++;
        }
    }
    fclose(fp);
    return counter;
}

int read_file(char* filename, bus_t* bus){
    FILE *fp;
    fp = fopen(filename, "r");

    char line[50];
    int counter = 0;
    int data_counter = 0;

    if (fp == NULL) {
        printf("Can't open the file");
        return -1;
    } else {
        while (fgets((char *) line, sizeof(line), fp) != NULL) {
            char *data = strtok(line, ";");
            strcpy(bus[counter].name, data);
            bus[counter].id = counter;
            printf("name: %s\n", bus[counter].name);
            while(data != NULL){
                data = strtok(NULL, " ");
                switch(data_counter){
                    case 0 :
                        bus[counter].seats = strtol(data, NULL, 10);
                        printf("seats: %d\n", bus[counter].seats);
                        data_counter = 1;
                        break;
                    case 1 :
                        bus[counter].standing_places = strtol(data, NULL, 10);
                        printf("stndplc: %d\n", bus[counter].standing_places);
                        data_counter = 2;
                        break;
                    case 2 :
                        data_counter = 0;
                        break;
                }
                bus[counter].number_of_passangers = 0;
            }
            counter++;
        }
    }
    fclose(fp);
    return 0;
}

void get_on(int passengers, bus_t* bus, int id){
    printf("Passengers to get on: %d\n", passengers);
    printf("Passengers already on the bus: %d\n", bus[id].number_of_passangers);
    if(bus[id].number_of_passangers == 0){
        if(passengers >= bus[id].seats + bus[id].standing_places){
            printf("All seats and standing places are occupied, %d passengers left at the stop\n", passengers - bus[id].seats - bus[id].standing_places);
        }else{
            if(passengers < bus[id].seats){
                printf("%d remaining seats and %d remaining standing palces are on the bus\n", bus[id].seats - passengers, bus[id].standing_places);
            }else{
                printf("0 remaining seats and %d remaining standing places are on the bus\n", -1 * (passengers - bus[id].seats - bus[id].standing_places));
            }
        }
    }else if(bus[id].number_of_passangers !=0){

    }
}
