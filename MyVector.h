//
// Created by cmpe250student on 3.10.2019.
//

#ifndef PS1_MYVECTOR_H
#define PS1_MYVECTOR_H

#include <cstddef>

// template <typename T>
template <class T>
class MyVector {
private:
    int size;
    T * storage;
    int last_element;
    void expand(int newsize) {
        T * newstorage = new T[newsize];
        for (int i = 0; i < size; i++) {
            newstorage[i] = storage[i];
        }
        delete[] storage;
        storage = newstorage;
        size = newsize;
    }

    void set(int index, T value) {
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

    void append(T value) {
        set(last_element + 1, value);
    }

    T pop() {
        if (last_element >= 0)
            return storage[last_element--];
    }

    T get(int index) {
        if (0 <= index && index <= last_element) {
            return storage[index];
        }
    }
};


#endif //PS1_MYVECTOR_H
