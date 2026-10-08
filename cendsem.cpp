#include<iostream>
#include<queue>
using namespace std;
class College_Canteen{
    queue<string> student;
    //Adding students to queue
public:
    College_Canteen(){
    student.push("student1");
    student.push("student2");
    student.push("student3");
    student.push("student4");
    student.push("student5");
    }
public:
    void display(){
    //Student in Front
    cout<<"The First Served--";
    cout<<student.front()<<endl;
    //Student waiting last
    cout<<"The Last Served--";
    cout<<student.back()<<endl;
    }
public:
    void waitingList() {
        if (student.empty()) {
            cout << "Queue is empty\n";
        } else {
            cout << "Queue is not empty\n";
        }
    }
};
int main(){
    College_Canteen students;
    students.waitingList();
    students.display();

    return 0;
}
