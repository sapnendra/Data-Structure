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

int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout <<"Size of stack before insertion: "<< st.size() << endl;
    insertAtBottom(st, 40);
    cout <<"Size of stack after insertion: "<< st.size() << endl;
    return 0;
}