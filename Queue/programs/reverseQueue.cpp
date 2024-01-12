#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void reverseQueue(queue<int> &q){
    stack<int> st;
    // take element one by one from queue and push into stack
    while(!q.empty()) {
        int frontElement = q.front();
        q.pop();

        st.push(frontElement);
    }

    // take element one by one from stack and push into queue
    while(!st.empty()) {
        int element = st.top();
        st.pop();

        q.push(element);
    }
}

void reverse(queue<int> &q) {
    if(q.empty()) {
        // base case
        return;
    }

    int element = q.front();
    q.pop();

    reverse(q);
    q.push(element);
}

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    
    // reverseQueue(q);
    reverse(q);

    cout <<"Printing Queue After reverse k element : "<<endl;
    while(!q.empty()) {
        int element = q.front();
        q.pop();

        cout << element << " ";
    }
    cout << endl;


    return 0;
}