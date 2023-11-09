#include<iostream>
#include<stack>
using namespace std;

int findMiddleElement(stack<int> st, int position) {
    // base case 
    if(st.empty()) {
        cout << "Stack is empty" << endl;
        return -1;
    }
    if(position == 1) {
        // element found
        return st.top();
    }

    // one case solution
    position--; 
    int temp = st.top(); 
    st.pop();

    // recursion call
    int middle = findMiddleElement(st, position);
    st.push(temp); // backtrack
    
    return middle;
}

int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(50);
    st.push(60);
    st.push(70);
    int size = st.size();
    if(size%2 == 0) {
        size = size/2;
    } else {
        size = size/2+1;
    }
    int middleEle = findMiddleElement(st, size);
    cout << "Middle element of the stack: " << middleEle << endl;

    cout <<"Size of stack: "<< st.size() << endl;
    return 0;
}