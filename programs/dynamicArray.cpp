#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int> vec) {
    cout << "Your vector elements are: ";

    // simple for loop
    // int size = vec.size();
    // for(int i=0; i<size; i++) {
    //     cout << vec[i] <<" ";
    // }

    // for each loop
    for(auto iterate:vec) {
        cout << iterate <<" ";
    }
    cout << endl;
}

int main() {

    // vector creation

    vector<int> vec;
    
    // insert
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(2);

    // print vector
    printVector(vec);


    // vector<int> vec;

    // // insert multiple
    // while(true) {
    //     int data;
    //     cin >> data;
    //     if(data == -1) {
    //         break;
    //     }
    //     vec.push_back(data);
    // }

    // cout << "Capacity of vector: " << vec.capacity() <<endl;
    // cout << "Size of vecotr: " << vec.size() << endl;

    // cout << "Fornt: "<< vec[0] << endl;
    // cout << "Last ele: "<< vec[vec.size()-1] << endl;

    // cout <<"Front element of vector: "<< vec.front() << endl;
    // cout <<"Last element of vector: "<< vec.back() << endl;
    // printVector(vec);

    // vec.clear();
    // cout << "your vector clear now";

    // printVector(vec);

    // insert
    // vec.push_back(7);
    // vec.push_back(8);
    // vec.push_back(9);
    // vec.push_back(9);
    // vec.push_back(9);


    // printVector(vec);

    // int n;
    // cin >> n;
    // dynamic memory alocation
    // int* arr = new int[n];

    // for(int i=0; i<n; i++) {
    //     int data;
    //     cin >> data;
    //     arr[i] = data;
    // }
    return 0;
}