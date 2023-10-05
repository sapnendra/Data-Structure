#include <iostream>
#include<vector>
using namespace std;


int main() {
    int a = 100;
    int* ptr = &a;
    int* cPtr = ptr;
    int* copyCptr = cPtr;

    cout << "a: " << a << endl;
    cout << "&a: " << &a << endl;
    // cout << "*a: " << *a << endl;  // error
    cout << "ptr: " << ptr << endl;
    cout << "&ptr: " << &ptr << endl;
    cout << "*ptr: " << *ptr << endl;

    cout << "cPtr: " << cPtr << endl;
    cout << "&Pptr: " << &cPtr << endl;
    cout << "*cPtr: " << *cPtr << endl;

    cout << "(*ptr)++ : " << (*ptr)++ << endl;
    cout << "++(*ptr): " << ++(*ptr) << endl;
    
    *ptr = *ptr/2;
    cout << "divide: " << *ptr << endl;
    *ptr = *ptr-2;
    cout << "(*ptr-2): " << *ptr << endl;

    return 0;
}