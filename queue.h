#include <vector>
#include <iostream>
#include <stdexcept>
using namespace std;

template<typename T>
class Queue {
private:
    vector<T> data;

public:
    bool isEmpty() const;
    T first() const;
    void push(const T& value);
    void pop();
    void show() const;
};

