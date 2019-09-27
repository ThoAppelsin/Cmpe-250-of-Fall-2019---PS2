//
// Created by cmpe250student on 26.09.2019.
//

#ifndef PS1_STUDENT_H
#define PS1_STUDENT_H

#include <string>
#include <vector>

class Student {
private:
    std::string name;
    std::vector<Student*> friends;
public:
    int age;
    Student();
    Student(std::string p_name, int p_age);
    static int test(int q);
};


#endif //PS1_STUDENT_H
