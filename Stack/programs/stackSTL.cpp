#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<int> st;
    //push operation
    st.push(10);
    st.push(20);
    st.push(30);

    // size of stack
    cout << "Size of the stack: " << st.size() << endl;

    // pop operation
    st.pop();
    cout << "Size of the stack after perform a pop operation: " << st.size() << endl;

    // is stack is empty
    if(st.empty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is non-empty" << endl;
    }

    // top element in the stack
    cout << "Top element: " << st.top() << endl;
    return 0;
}