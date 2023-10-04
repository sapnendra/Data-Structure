#include<bits/stdc++.h>
using namespace std;

// predicate function

bool isPossibleSolution(vector<int>& cooksRanks, int nP, int mid) {
    int prataCompleted = 0;
    for(int i=0; i<cooksRanks.size(); i++) {
        int R = cooksRanks[i], j = 1;
        int timeTaken = 0;

        while(true) {
            if(timeTaken+j*R <= mid) {
                ++prataCompleted;
                timeTaken += j*R;
                ++j;
            } else {
                break;
            }
        }

        if(prataCompleted >= nP) {
            return true;
        }
    }

    return false;
}

int minimumTimeToCompleteOrder(vector<int>& cooksRanks, int nP) {
    int start = 0;
    int highestRank = *max_element(cooksRanks.begin(), cooksRanks.end());
    int end = highestRank*(nP*(nP+1)/2);

    int ans = -1;

    while(start <= end) {
        int mid = (start + end) >> 1;

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
        while(nC--) {
            int rank;
            cin >> rank;

            cooksRanks.push_back(rank);
        }

        int minTime = minimumTimeToCompleteOrder(cooksRanks, nP);
        cout << minTime << endl;
    }

    return 0;
}