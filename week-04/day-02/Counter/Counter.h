
#ifndef COUNTER_COUNTER_H
#define COUNTER_COUNTER_H


class Counter {
public:
    Counter();
    Counter(int value);
    void add(int number);
    void add();
    int get();
    int reset();

private:
    int _value;
    int _initialValue = 0;


};


#endif //COUNTER_COUNTER_H
