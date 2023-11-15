#include<iostream>
#include<stack>
using namespace std;

class Stack{
public:
    int* arr;
    int size;
    int top;

    Stack(int size) {
        arr = new int[size];
        this->size = size;
        this->top = -1;
    }

public:
    bool empty() {
        if(top == -1) {
            return true;
        } else {
            return false;
        }
    }

    int getSize() {
        return top+1;
    }

    void push(int data) {
        if(top == size-1) {
            cout << "Stack overflow" << endl;
        } else {
            top++;
            arr[top] = data;
        }
    }

    void pop() {
        if(top == -1) {
            cout << "Stack underflow" << endl;
        } else {
            top--;
        }
    }

    int getTop() {
        if(top == -1) {
            cout << "Stack is empty" << endl;
        } else {
           return arr[top];
        }
    }
};

int main() {
    Stack st(100);

    st.push(10);
    st.push(20);
    st.push(30);

    st.pop();

    cout <<"Size of stack: " << st.getSize() << endl;
    cout <<"Top element of stack: " << st.getTop() << endl;
    if(st.empty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is non-empty" << endl;
    }
    return 0;
}