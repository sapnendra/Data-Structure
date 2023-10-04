#include<bits/stdc++.h>
using namespace std;

// predicate function


int minimumTimeToCompleteOrder(vector<int>& cooksRanks, int nP) {
    sort(cooksRanks.begin(), cooksRanks.end());

    int size = cooksRanks.size();
    int start = 0;
    int end = *max_element(cooksRanks.begin(), cooksRanks.end());

    int ans = -1;

    while(start <= end) {
        int mid = start + (end-start)/2;

        if(isPossibleSolution(cooksRanks, nP, mid)) {
            ans = mid;
            end = mid-1;
        } else {
            start = mid+1;
        }
    }

    return ans;
}

int main() {

    int t;
    cin >> t;
    while(t--) {
        int nP, nC;
        cin >> nP >> nC;

        vector<int> cooksRanks;
        while(nP--) {
            int rank;
            cin >> rank;

            cooksRanks.push_back(rank);
        }

        int minTime = minimumTimeToCompleteOrder(cooksRanks, nP);
        cout << minTime << endl;
    }

    return 0;
}