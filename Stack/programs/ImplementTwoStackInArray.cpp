#include<iostream>
#include<stack>
using namespace std;

class Stack {
public:
    int* arr;
    int size;
    int top1;
    int top2;

    Stack(int size) {
        arr = new int[size];
        this->size = size;
        this->top1 = -1;
        this->top2 = size;
    }

    void push1(int data) {
        if(top2-top1 == 1) {
            cout << "No space available in Array" << endl;
        }
        top1++;
        arr[top1] = data;
    }

    void push2(int data) {
        if(top2-top1 == 1) {
            cout << "No space available in Array" << endl;
        }
        top2--;
        arr[top2] = data;
    }

    void pop1() {
        if(top1 == -1) {
            cout << "Stack-One is Underflow" << endl;
        }
        top1--;
    }

    void pop2() {
        if(top2 == size) {
            cout << "Stack-Two is Underflow" << endl;
        }
        top2++;
    }
    int getTop1() {
        if(top1 == -1) {
            cout << "Stack1 is Empty" << endl;
            return -1;
        }
        return arr[top1];
    }

    int getTop2() {
        if(top2 == size) {
            cout << "Stack2 is empty" << endl;
            return -1;
        }
        return arr[top2];
    }
};

int main() {
    Stack st(10);
    st.push1(10);
    st.push1(20);
    st.push1(30);
    st.push1(40);

    st.push2(600);
    st.push2(500);
    st.push2(400);
    st.push2(300);
    st.push2(200);
    st.push2(100);

    int top1 = st.getTop1();
    int top2 = st.getTop2();

    cout << "Top element of first stack : " << top1 << endl;
    cout << "Top element of second stack : " << top2 << endl;

    st.pop1();
    st.pop2();

    top1 = st.getTop1();
    top2 = st.getTop2();

    cout << "Top element of first stack : " << top1 << endl;
    cout << "Top element of second stack : " << top2 << endl;

    return 0;
}