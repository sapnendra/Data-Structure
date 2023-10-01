#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    
    // this is the predicate function
    bool isPossibleSolution(int a[], int n, int m, int mid) {
        int pageSum = 0;
        int count = 1;
        for(int i=0; i<n; i++) {
            if(a[i] > mid) {
                return false;
            }
            if(pageSum + a[i] > mid) {
                count++;
                pageSum = a[i];
                if(count > m) {
                    return false;
                }
            } else {
                pageSum += a[i];    
            }
        }
        return true;
    }
    
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        if(M > N) return -1;
        
        int start = 0;
        int end = accumulate(A, A+N, 0);
        int ans = -1;
        
        while(start <= end) {
            int mid = (start+end)>>1;
            if(isPossibleSolution(A, N, M, mid)) {
                ans = mid;
                end = mid-1;
            } else {
                start = mid+1;
            }
        }
        return ans;
    }
};

int main() {
    int t;
    cin >> t; 
    while(t--) {
        int n;
        int m;
        cin >> n >> m;

        int arr[n];
        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.findPages(arr, n, m) << endl;
    }
    return 0;
}