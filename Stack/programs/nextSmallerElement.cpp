#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> nextSmallerElement(int *arr, int size, vector<int> &ans) {
    stack<int> st;
    st.push(-1);

    for(int i=size-1; i>=0; i--) {
        int curr = arr[i];
        // find the answer for current element
        while(st.top() >= curr) {
            st.pop();
        }
        
        // ab stack me current element se smaller pada hua hai 
        ans[i] = st.top();
        st.push(curr);
    }
    return ans;
}

int main() {
    int size;
    cin >> size;
    int *arr = new int[size];
    for(int i=0; i<size; i++) {
        cin >> arr[i];
    }

    vector<int> next(size);
    next = nextSmallerElement(arr, size, next);

    for(auto i:next) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}