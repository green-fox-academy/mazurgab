#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//In the file you can find the daily log of a shop's traffic sensor. For every hour it logs the number of incoming and outgoing customers
//The first line tells you how much hours it was working. Let's say this number is N.
//Then N lines follows. Each of them contains the time frame and 0s and 1s. 0 means a customer left the store, 1 means a customer entered the store.
//Create a function that reads the data and returns a pointer to it and the size.
//Create functions to answer the following questions:

//How many customers the shop had that day?
//What was the time with the most traffic?(Sum of incoimng and outgoing customers)
//When the shop needs the most cashiers?(When was the time the most customer was in ther store)
//Does it worth to keep the shop open in the last 2 hours? It worths it if at least 5% of the total customers was in the store at the last 2 hours.

int file_read_open_hours(char* path, int open_hours);
int read_statics(char* path, char** intervals, int** traffic);
int total_costumer(int open_hours, int** traffic);
void most_traffic(int open_hours, char** intervals, int** traffic);
void most_cashier(int open_hours, char** intervals, int** traffic);
void worth_late_open_hours(int open_hours, char** intervals, int** traffic);

int main()
{
    char* path = "../shop_statics.txt";
    int open_hours = 0;
    open_hours = file_read_open_hours(path, open_hours);
    printf("open_hours: %d\n", open_hours);

    char** intervals = (char**) malloc ((2 * open_hours) * sizeof(char));
    int** traffic = (int**) malloc (2 * open_hours*sizeof(int));

    read_statics(path, intervals, traffic);

    printf("-----------------------------------------------\n");

    total_costumer(open_hours, traffic);
    most_traffic(open_hours, intervals, traffic);
    most_cashier(open_hours,intervals, traffic);
    worth_late_open_hours(open_hours,intervals, traffic);

    return 0;
}

int file_read_open_hours(char* path, int open_hours) {
    FILE *file_pointer;
    file_pointer = fopen(path, "r");

    char line[256];
    int lineNumber = 0;
    int count = 0;

    if (file_pointer == NULL) {
        printf("Can't open the file!\n");
        return -1;
    }else{
        char *data = strtok(line, " ");
        while (fgets(line, sizeof line, file_pointer) != NULL){
            if(lineNumber == count) {
                if (strtol(data, NULL, 10) != 0) {
                    open_hours = strtol(data, NULL, 10);
                    return open_hours;
                }
            }else{
                count++;
            }
        }
        fclose(file_pointer);
    }
    return -2;
}

int read_statics(char* path, char** intervals, int** traffic){
    FILE *file_pointer;
    file_pointer = fopen(path, "r");

    char line[256];
    int line_count = 0;
    int count_1 = 0;
    int count_0 = 0;

    if (file_pointer == NULL) {
        printf("Can't open the file!\n");
        return -3;
    } else {
        while (fgets(line, sizeof line, file_pointer) != NULL) {
            char *data = strtok(line, " ");
            if (line_count >= 1) {
                //printf("reading line: %d\n ", line_count);
                intervals[line_count - 1] = (char *) malloc((strlen(data) + 1) * sizeof(char));
                strcpy(intervals[line_count - 1], data);
                //printf("interval: %s, interval[]: %d\n", intervals[line_count - 1], line_count - 1);
                while (data != NULL) {
                    data = strtok(NULL, " ");
                    if (strtol(data, NULL, 10) != 0) {
                        count_1++;
                        //printf("running count 1: %d\n", count_1);
                    }else if(strtol(data, NULL, 10) == 0){
                        count_0++;
                        //printf("running count 0: %d\n", count_0);
                    }
                }
                traffic[line_count - 1] = (int*) malloc (2 * sizeof(int));
                traffic[line_count - 1][0] = count_0 - 1;
                traffic[line_count - 1][1] = count_1;
                printf("line: %d, interval: %s, incoming costumer: %d, leaving costumer: %d\n", line_count, intervals[line_count - 1], traffic[line_count - 1][1], traffic[line_count - 1][0]);
                count_0 = 0;
                count_1 = 0;
                //printf("Leaving line: %d\n", line_count);
                line_count++;
            }else{
                //printf("reading line: %d\n", line_count);
                line_count++;
            }
        }
    }
    fclose(file_pointer);
    //printf("closing file\n");
    return 0;
}

int total_costumer(int open_hours, int** traffic){
    int total_costumers = 0;
    for (int i = 0; i < open_hours; ++i) {
        total_costumers += traffic[i][1];
    }
    printf("The shop had %d coustumers today.\n", total_costumers);
    return total_costumers;
}

void most_traffic(int open_hours, char** intervals, int** traffic){
    int max = 0;
    char busiest_interval[20];
    for (int i = 0; i < open_hours; ++i) {
        if(traffic[i][0] + traffic[i][1] > max){
            max = traffic[i][0] + traffic[i][1];
            strcpy(busiest_interval, intervals[i]);
        }
    }
    printf("The most traffic (sum of incoming and leaving costumer: %d) was in the interval: %s\n", max, busiest_interval);
}

void most_cashier(int open_hours, char** intervals, int** traffic){
    int cummulate_max = 0;
    char busiest_interval[20];
    int hour_traffic = 0;
    int running_traffic = 0;
    for (int i = 0; i < open_hours; ++i) {
        hour_traffic = traffic[i][1] - traffic[i][0];
        running_traffic += hour_traffic;
        if(running_traffic > cummulate_max){
            cummulate_max = running_traffic;
            strcpy(busiest_interval, intervals[i]);
        }
    }
    printf("The most cashier needed (max costumer in the shop: %d) in the interval: %s\n", cummulate_max, busiest_interval);
}

void worth_late_open_hours(int open_hours, char** intervals, int** traffic){
    float sum_of_leaving_coustumer =0;
    for (int i = 0; i < open_hours; ++i) {
        sum_of_leaving_coustumer += traffic[i][0];
    }
    float sum_of_leaving_in_the_last_2_hours = 0;
    for (int j = open_hours - 2; j < open_hours; ++j) {
        sum_of_leaving_in_the_last_2_hours += traffic[j][0];
    }
    if((sum_of_leaving_in_the_last_2_hours / sum_of_leaving_coustumer) > 0.05){
        printf("The last two hours traffic percentage was: %.2lf, it worth keeping the shop open until 22:00.\n", (sum_of_leaving_in_the_last_2_hours / sum_of_leaving_coustumer) * 100);
    }else{
        printf("The last two hours traffic percentage was: %.2lf, it isn't worth keeping the shop open after 20:00.\n", (sum_of_leaving_in_the_last_2_hours / sum_of_leaving_coustumer) * 100);
    }
}