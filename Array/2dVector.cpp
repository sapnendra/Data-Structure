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
    vector<vector<int> > vec(5, vector<int> (10, 0));

    int row = vec.size();
    int col = vec[0].size();

    cout <<"Size of vector :"<< vec.size() <<endl;
    cout <<"Capacity of vector :"<< vec.capacity() <<endl;

    cout <<"Your vector :"<<endl;
    print2dArray(vec);

    return 0;
}