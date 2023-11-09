#include<iostream>
#include<stack>
using namespace std;

void insertInSortedStack(stack<int> &st, int data) {
    // base case
    if(st.empty() || data > st.top()) {
        st.push(data);
        return;
    }

    // one case solution
    int temp = st.top();
    st.pop();

    // recursion call
    insertInSortedStack(st, data);
    st.push(temp);  // backtrack
}

int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);

    insertInSortedStack(st, 0);
    while(!st.empty()) {
        cout << st.top() <<" ";
        st.pop(); 
    }
    cout << endl;
    return 0;
}