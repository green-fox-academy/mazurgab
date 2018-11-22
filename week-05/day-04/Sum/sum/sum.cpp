#include "sum.h"

int summary;

int sum(std::vector <int> v){
    for (int i = 0; i < v.size(); ++i) {
        summary += v[i];
    }
    return summary;
}