#include <iostream>
#include <string>
#include <vector>

#include "Student.h"
#include "MyVector.h"

void main1() {
    Student me {
            "Utkan", 26
    }; // Brace initializer

    Student copy_of_me = me;
    Student * pointer_to_me = &me;
    Student & reference_to_me = me;

    (*pointer_to_me).age = 20;
    copy_of_me.age = 30;
    reference_to_me.age = 40;

    std::cout << "Hello, World!" << me.age << std::endl;
}

void main2() {
    Student me {
            "Utkan", 26
    }; // Brace initializer

    Student somebody {
        "Ali", 27
    };

    Student copy_of_me = me;
    Student * pointer_to_me = &me;
    Student & reference_to_me = me;

    reference_to_me = somebody;
    // me = somebody;

    std::cout << &me << std::endl;
    std::cout << &somebody << std::endl;
    std::cout << &reference_to_me << std::endl;
}

void main3(int);

int main() {
//    std::vector<int> a{};
//    std::cout << a.at(5) << std::endl;

    {
        MyVector<Student> vec{};
        vec.append(Student{"Utkan", 26});
        vec.append(Student{"Ayse", 20});

        std::cout << vec.get(0).age << std::endl
                  << vec.get(1).age << std::endl;
    }
    
    return 0;
}

void main3(int q) {
    static int i = 20;

    i++;
    std::cout << i << q << std::endl;
}