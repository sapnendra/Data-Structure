#include<iostream>
#include<queue>
#include<deque>
#include<stack>
using namespace std;

void printFirstNegativeInWindow(int *arr, int n, int window) {
    deque<int> dq;

    // process first k elements - first window
    for(int index=0; index<window; index++) {
        int element = arr[index];
        if(element < 0) {
            dq.push_back(index);
        }
    }

    //process remaining windows - removal an addition
    for(int index=window; index<n; index++) {
        // give answer of old window fisrt, then go ahead
        if(dq.empty()) {
            cout << "0" << endl;
        } else {
            cout << arr[dq.front()] << " ";
        }

        // Removel - remove that element which is out of range of window
        if(index - dq.front() >= window) {
            dq.pop_front();
        }

        // addition
        if(arr[index] < 0) {
            dq.push_back(index);
        } 
    }
    // answer for last window 
    if(dq.empty()) {
        cout << "0" << endl;
    } else {
        cout << arr[dq.front()] << " ";
    }
}

int main() {
    queue<int> q;
    int arr[] = {2, -5, 4, -1, -2, 0, 5};
    int size = 7;
    int window = 3;
    printFirstNegativeInWindow(arr, size, window);
    
    return 0;
} 