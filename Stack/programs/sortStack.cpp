#include<iostream>
#include<stack>
using namespace std;

void insertInSortedStack(stack<int> &st, int data) {
    // base case

    // cout << "I am here" << endl;
    if(st.empty() || data > st.top()) {
        st.push(data);
        return;
    }
    // cout << "I am here again" << endl;

    // one case solution
    int temp = st.top();
    st.pop();

    // recursion call
    insertInSortedStack(st, data);
    st.push(temp);  // backtrack
}

void sortStack(stack<int> &st) {
    // base case
    if(st.empty()) {
        return;
    }

    // one case solution
    int temp = st.top();
    st.pop();

    // recursion call
    sortStack(st);
    insertInSortedStack(st, temp);  // backtrack
}

int main() {
    stack<int> st;
    st.push(20);
    st.push(90);
    st.push(30);
    st.push(65);
    st.push(50);
    st.push(10);

    sortStack(st);
    
    while(!st.empty()) {
        cout << st.top() <<" ";
        st.pop(); 
    }
    cout << endl;
    return 0;
}