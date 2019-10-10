//
// Created by cmpe250student on 26.09.2019.
//

#include <iostream>
#include "Student.h"

Student::Student() {
    name = "";
    age = -1;
    friends = std::vector<Student *>{};

    std::cout << "Constructing a Student " << name << std::endl;
}

Student::Student(std::string p_name, int p_age) {
    name = p_name;
    age = p_age;
    friends = std::vector<Student*>{};

    std::cout << "Constructing a Student " << name << std::endl;
}

int Student::test(int q) {
    return q + 10;
}


