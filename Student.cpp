//
// Created by cmpe250student on 26.09.2019.
//

#include "Student.h"

Student::Student() {
    name = "";
    age = -1;
    friends = std::vector<Student *>{};
}

Student::Student(std::string p_name, int p_age) {
    name = p_name;
    age = p_age;
    friends = std::vector<Student*>{};
}

int Student::test(int q) {
    return q + 10;
}


