#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!s1.empty()) {  //1
            s2.push(s1.top());
            s1.pop();
        }
        s2.push(x);  //2
        while(!s2.empty()) {  //3
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    int pop() {
        int curr = s1.top();
        s1.pop();
        return curr;
    }
    
    int peek() {
        return s1.top();
    }
    
    bool empty() {
        return s1.empty();
    }
};

int main() {
    
    MyQueue q;
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);

    q.pop();
    q.pop();
    q.pop();
    q.pop();

    q.push(10);

    cout << "Front element of the queue : " << q.peek() << endl;

    if(q.empty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }
    return 0;
}