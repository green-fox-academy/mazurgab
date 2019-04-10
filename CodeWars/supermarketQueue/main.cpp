#include <iostream>
#include <vector>

long queueTime(std::vector<int> customers,int n);

int main() {
    queueTime(std::vector<int>{23,41,56,123}, 2);
    return 0;
}

long queueTime(std::vector<int> customers,int n){

    if(n == 1){
        int sum = 0;
        for (int i = 0; i < customers.size(); i++) {
            sum += customers[i];
        }
        std::cout<<sum<<std::endl;
        return sum;
    }else{
        int tillsTime[n];

        if(n < customers.size()){
            for (int i = 0; i < n; i++) {
                tillsTime[i] = customers[i];
            }
        }else if(customers.size() <= n){
            int slowestCustomer = customers[0];
            for (int i = 0; i < customers.size(); i++) {
                if(customers[i] > slowestCustomer){
                    slowestCustomer = customers[i];
                }
            }
            std::cout<<slowestCustomer<<std::endl;
            return slowestCustomer;
        }

        for (int j = 0; j < customers.size() - n; j++) {
            int* quickerTills = &tillsTime[0];
            for (int i = 0; i < n; i++) {
                if (tillsTime[i] < *quickerTills){
                    quickerTills = &tillsTime[i];
                }
            }
            *quickerTills += customers[n + j];
        }

        int* slowestTills = &tillsTime[0];
        for (int k = 0; k < n; k++) {
            if (tillsTime[k] > *slowestTills){
                slowestTills = &tillsTime[k];
            }
        }
        std::cout<<*slowestTills<<std::endl;
        return *slowestTills;
    }
}