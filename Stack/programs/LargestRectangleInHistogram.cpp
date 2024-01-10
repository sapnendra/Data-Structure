#include<iostream>
#include<vector>
#include<stack>
#include<climits>
using namespace std;

class Solution {
public:

    vector<int> nextSmallerElement(vector<int>& arr) {
        vector<int> ans(arr.size());
        stack<int> st;
        st.push(-1);

        for(int i=arr.size()-1; i>=0; i--) {
            int curr = arr[i];
            // find the answer for current element
            while(st.top() != -1 && arr[st.top()] >= curr) {
                st.pop();
            }
            
            // ab stack me current element se smaller pada hua hai 
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int> prevSmallerElement(vector<int>& arr) {
        vector<int> ans(arr.size());
        stack<int> st;
        st.push(-1);

        for(int i=0; i<arr.size(); i++) {
            int curr = arr[i];
            // find the answer for current element
            while(st.top() != -1 && arr[st.top()] >= curr) {
                st.pop();
            }
            
            // ab stack me current element se smaller pada hua hai 
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
    
    int largestRectangleArea(vector<int>& heights) {
        vector<int> next = nextSmallerElement(heights);
        // make sure karna hai next me koi bhi answer -1 na ho
        for(int i=0; i<next.size(); i++) {
            if(next[i] == -1) {
                next[i] = next.size();
            }
        }
        vector<int> prev = prevSmallerElement(heights);

        int maxArea = INT_MIN;
        for(int i=0; i<heights.size(); i++) {
            int length = heights[i];
            int width = next[i] - prev[i] - 1;
            int currArea = length * width;
            maxArea = max(maxArea, currArea);
        }

        return maxArea;
    }
};

int main() {

    return 0;
}