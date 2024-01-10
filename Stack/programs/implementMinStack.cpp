#include<iostream>
#include<vector>
#include<utility>
using namespace std;

class MinStack{
public:
    vector<pair<int,int>> st;
    MinStack(){
        cout << "Object is created";
    }

    void push(int data){
        if(st.empty()){
            // it means, I am inserting first element
            pair<int,int> p;
            p.first = data;
            p.second = data;
            st.push_back(p);
        } else {
            pair<int, int> p;
            p.first = data;
            int prevMin =  st.back().second;
            p.second = min(prevMin, data);
            st.push_back(p);
        }
    }

    void pop(){
        st.pop_back();
    }

    int top(){
        pair<int, int> rightMostpair = st.back();
        return rightMostpair.first;
    }

    int getMin(){
        pair<int, int> rightMostPair = st.back();
        return rightMostPair.second;
    } 
};

int main() {
    int val;
    cout << "Enter value you want to push in minStack : ";
    cin >> val;
    MinStack* obj = new MinStack();
    obj->push(val);
    obj->pop();
    int top = obj->top();
    int minimum = obj->getMin();
    cout << "Minimum element : " << minimum << endl;
    cout << "Top : " << top << endl;
    return 0;
}