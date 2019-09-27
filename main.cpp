#include <iostream>
#include <string>
#include <vector>

#include "Student.h"

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

void main3() {
    static int i = 20;

    i++;
    std::cout << i << std::endl;
}

int main() {
    std::cout << Student::test(20) << std::endl;
    main3();
    main3();
    return 0;
}