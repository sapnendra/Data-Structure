#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> prevSmallerElement(int *arr, int size, vector<int> &ans) {
    stack<int> st;
    st.push(-1);

    for(int i=0; i<size; i++) {
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

    vector<int> prev(size);
    prev = prevSmallerElement(arr, size, prev);

    for(int i=0; i<size; i++) {
        cout << prev[i] << " ";
    }
    cout << endl;
    return 0;
}