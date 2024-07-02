#include<iostream>
#include<vector>
using namespace std;

void print2dArray(vector<vector<int> > vec) {
    for(int i=0; i<vec.size(); i++) {
        for(int j=0; j<vec[i].size(); j++) {
            cout << vec[i][j] <<" ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int> > vec;

    vector<int> v1(1, 0);
    vector<int> v2(2, 0);
    vector<int> v3(3, 0);
    vector<int> v4(4, 0);

    vec.push_back(v1);
    vec.push_back(v2);
    vec.push_back(v3);
    vec.push_back(v4);
    
    // cout <<"Capacity of vector :"<< vec.capacity() <<endl;

    cout <<"Your vector :"<<endl;
    print2dArray(vec);

    return 0;
}