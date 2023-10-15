#include<iostream>
using namespace std;

void changeSign(int* &ptr) {
    *ptr = (*ptr) * -1;
}

int main() {

    int a = 10;
    changeSign(&a);
    cout << a << endl;

    // char* ptr;
    // char arr[] = "abcdefg";

    // ptr = arr;
    // ptr += 5;
    // cout << ptr << endl;

    // char arr[20];
    // int i;
    // for(i=0; i<10; i++) {
    //     *(arr + i) = 65+i;
    // }
    // *(arr+i) = '\0';
    // cout << arr << endl;

    // char ch[] = "xyz";
    // char* ptr = ch;

    // cout << ptr[0] << " " << ch[1] << endl;



    // cout << ptr << endl;
    // cout << ch << endl;

    // int a = 10;
    // int* c = &a;

    // c = c+1;
    // cout << a << " " << *c <<endl;

    // char ch = 'a';
    // char* ptr = &ch;

    // ch++;
    // cout << *ptr << endl;

    // int* ptr = 0;
    // int a = 10;
    // *ptr = a;
    // cout << *ptr << endl;
    // int a = 7;
    // int b = 17;

    // int* c = &b;
    // *c = 7;
    // cout << a << " " << b << endl;
    return 0;
}