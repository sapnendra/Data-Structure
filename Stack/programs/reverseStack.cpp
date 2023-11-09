#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>& st, int data) {
    // base case 
    if(st.empty()) {
        st.push(data);
        return;
    }

    // one case solution
    int temp = st.top(); 
    st.pop();

    // recursion call
    insertAtBottom(st, data);
    st.push(temp); // backtrack
}

void reverseStack(stack<int> &st) {
    // base case
    if(st.empty()) {
        return;
    }

    // one case solution
    int temp = st.top();
    st.pop();

    // recursion call
    reverseStack(st);
    insertAtBottom(st, temp);  // backtrack
}

int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);

    // Without reverse: 
    // 30 20 10

    reverseStack(st);

    // With reverse: 
    // 10 20 3

    cout << "With reverse: " << endl;
    while(!st.empty()) {
        cout << st.top() <<" ";
        st.pop();
    }
    cout << endl;
    return 0;
}