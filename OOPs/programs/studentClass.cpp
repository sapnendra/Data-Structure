#include<bits/stdc++.h>
using namespace std;

class Student{
 public:
    int id;
    int age;
    string name;
    int numberOfSubject;

    void study() {
        cout << "Studying" << endl;
    }

    void sleep() {
        cout << "Sleeping" << endl;
    }

    void game() {
        cout << "Gaming" << endl;
    }

    void bunk() {
        cout << "Bunking" << endl;
    }
};

int main() {
    cout << "Size of student class: " << sizeof(Student) << endl;
    // Student golu;
    // golu.sleep();
    return 0;
}