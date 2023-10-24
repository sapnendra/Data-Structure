#include<iostream>
using namespace std;

int solve(int n){
    // base cases
    if(n==0) return 0;
    if(n==1) return 0;
    if(n==2) return 1;

    // recursive call and processing
    int ans = (n-1)*(solve(n-1)+solve(n-2));
    return ans;
}

int main() {    

    int n;
    cin >> n; 

    cout <<"Total number of ways to change the position of all elements of array: "<< solve(n) << endl;

    return 0;
}