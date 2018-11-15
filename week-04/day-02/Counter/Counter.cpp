#include "Counter.h"

Counter::Counter(){
    _value = 0;
    _initialValue = 0;
}

Counter::Counter(int value){
    _value = value;
    _initialValue = _value;
}

void Counter::add(int number){
    _value += number;
}

void Counter::add(){
    _value++;
}

int Counter::get(){
    return _value;
}

int Counter::reset(){
    _value = _initialValue;
    return _initialValue;
}

