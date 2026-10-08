#include <iostream>
using namespace std;

class Person {
public:
    void student() {
        cout << "I am a College Student\n";
    }
    void teacher() {
        cout << "I am a Teacher\n";
    }
};

class Student : public Person {
public:
    string stu_name = "Vijay";
    int rollno = 153;
};

class Teacher : public Person {
public:
    string tr_name = "Madhan";
    string dept = "MCA";
};

int main() {
    cout << "-------Student Details-------\n";
    Student s1;
    cout << "Name: " << s1.stu_name << "\n";
    cout << "Roll No: " << s1.rollno << "\n";
    s1.student();

    cout << "\n-------Teacher Details-------\n";
    Teacher t1;
    cout << "Name: " << t1.tr_name << "\n";
    cout << "Department: " << t1.dept << "\n";
    t1.teacher();

    return 0;
}
