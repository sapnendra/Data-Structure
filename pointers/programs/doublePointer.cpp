#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int* ptr = &a;
    int** qptr = &ptr;
    int***rqptr = &qptr;

    cout << a << endl;
    cout << &a << endl;

    cout << ptr << endl;
    cout << &ptr << endl;
    cout << *ptr << endl;
    
    cout << qptr << endl;
    cout << &qptr << endl;
    cout << *qptr << endl;
    cout << **qptr << endl;
    
    cout << rqptr << endl;
    cout << &rqptr << endl;
    cout << *rqptr << endl;
    cout << **rqptr << endl;
    cout << ***rqptr << endl;

    cout << endl;
    cout << **rqptr+1 << endl;
   
    return 0;
}