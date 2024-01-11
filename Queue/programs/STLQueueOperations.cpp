#include<iostream>
#include<queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    cout << "Size of queue is : " << q.size() << endl;
    cout << "Size of queue is : " << q.size() << endl;

    if(q.empty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }

    cout << "Front element of queue is : " << q.front() << endl;
    cout << "Back/Last element of queue is : " << q.back() << endl;
    return 0;
}