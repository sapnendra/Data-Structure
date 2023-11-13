#include<iostream>
#include<stack>
using namespace std;

// void inBuiltFunction() {
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     // porinting size of the stack
//     cout <<"Size of the array is: " << st.size() << endl;
//     // perfored pop operation
//     st.pop();
//     cout << "Size after pop operation performed: " << st.size() << endl;
//     //checking stack is empty or not
//     if(st.empty()) {
//         cout << "Your stack is empty" << endl;
//     } else {
//         cout << "Your stack is non-empty" << endl;
//     }
//     // printing top element of the stack
//     cout << "Top element of the stack: " << st.top() << endl;
// }

class Stack{
public: 
    int *arr;
    int top;
    int size;

public:
    Stack(int size) {
        arr = new int[size];
        this->size = size;
        this->top = -1;
    }

    void push(int data) {
        if(top == size) {
            cout << "Stack Overflow" << endl;
            return;
        } else {
            top++;
            arr[top] = data;
        }
    }

    void pop() {
        if(top == -1) {
            cout << "Stack Underflow" << endl;
            return;
        } else {
            top--;
        }
    }

    int getSize(){
        return top+1;
    }

    bool isEmpty() {
        if(top == -1) {
            return true;
        } else {
            return false;
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

    Stack st(10);

    return 0;
}