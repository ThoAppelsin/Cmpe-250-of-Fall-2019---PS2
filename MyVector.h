//
// Created by cmpe250student on 3.10.2019.
//

#ifndef PS1_MYVECTOR_H
#define PS1_MYVECTOR_H

#include <stdexcept>

// template <typename T>
template <class T>
class MyVector {
private:
    int size;
    T * storage;
    int last_element;

    // Template function definitions should stay in .h file!
    void expand(int newsize) {
        T * newstorage = new T[newsize];
        for (int i = 0; i < size; i++) {
            newstorage[i] = storage[i];
        }
        delete[] storage;
        storage = newstorage;
        size = newsize;
    }

    // Template function definition
    void set(int index, const T& value) {
        if (index < 0) {
            return;
        }
        else if (index < size) {
            // *(storage + index) == storage[index] == index[sotrage]
            storage[index] = value;
            if (index > last_element) last_element = index;
        }
        else {
            int newsize = 2 * index;
            expand(newsize);
            set(index, value);
        }
    }

public:
    MyVector() {
        size = 10;
        last_element = -1;
        storage = new T[size];
    }

    ~MyVector() {
        delete[] storage;
    }

    void append(const T& value) {
        set(last_element + 1, value);
    }

    T pop() {
        if (last_element >= 0) {
            return storage[last_element--];
        }
        else {
            throw std::out_of_range("Popping from an empty MyVector");
        }
    }

    T get(int index) {
        if (0 <= index && index <= last_element) {
            return storage[index];
        }
        else {
            throw std::out_of_range("Index " + std::to_string(index) +
                                    " is out of bounds [0, " + std::to_string(last_element) + "]");
        }
    }
};


#endif //PS1_MYVECTOR_H
