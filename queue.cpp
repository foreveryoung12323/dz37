#include "queue.h"

template<typename T>
bool Queue<T>::isEmpty() const {
    return data.empty();
}

template<typename T>
T Queue<T>::first() const {
    if (isEmpty()) throw runtime_error("Queue is empty");
    return data.front();
}

template<typename T>
void Queue<T>::push(const T& value) {
    data.push_back(value);
}

template<typename T>
void Queue<T>::pop() {
    if (isEmpty()) throw runtime_error("Queue is empty");
    data.erase(data.begin());
}

template<typename T>
void Queue<T>::show() const {
    for (const auto& item : data) {
        cout << item << " ";
    }
    cout << endl;
}
