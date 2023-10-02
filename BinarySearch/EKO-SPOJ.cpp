#include<bits/stdc++.h>
#include<climits>
using namespace std;

// predicate function
bool isPossibleSolution(vector<long long int> trees, int m, int mid) {
    long long int woodCollected = 0;
    for(long long int i=0; i<trees.size(); i++) {
        if(trees[i] > mid) {
            woodCollected += trees[i]-mid;
        }
    }
    if(woodCollected >= m) {
        return true;
    }
    return false;
}

int findSawBledHeight(vector<long long int> trees, long long int m) {
    sort(trees.begin(), trees.end());

    long long int start = 0;
    long long int end = *max_element(trees.begin(), trees.end());
    long long int ans = -1;
    
    while(true) {
        long long int mid = start + (end-start)/2;
        if(isPossibleSolution(trees, m, mid)) {
            ans = mid;
            start = mid+1;
        } else {
            end = mid-1;
        }
    }
    return ans;
}

int main() {
    long long int n;
    cin >> n;   // 4

    long long int m;
    cin >> m;   // 7

    vector<long long int> trees;
    while(n--) {
        long long int height;
        cin >> height;
        trees.push_back(height);  // 20 15 10 17
    }

    long long int sawBled = findSawBledHeight(trees, m);
    cout << sawBled;
    return 0;
}