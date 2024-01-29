#include<iostream>
using namespace std;

class DeQueue{
public:
    int *arr;
    int size;
    int front;
    int rear;
    
    // constructor
    DeQueue(int size) {
        arr = new int[size];
        this->size = size;
        front = -1; 
        rear = -1;
    }
    
    void push_front(int data) {
        if((front == 0 && rear == size-1) || front-rear == 1){
            //check Overflow
            cout << "OverFlow" << endl;
            return;
        } else if(front == -1 && rear == -1) {
            // first element insert
            front++;
            rear++;
            arr[front] = data;
        } else if(front == 0 && rear != size-1) {
            // circular nature
            front = size-1;
            arr[front] = data;
        } else {
            // normal case
            front--;
            arr[front] = data;
        }
    }

    void push_back(int data) {
        if((front == 0 && rear == size-1) || front-rear == 1){
            //check Overflow
            cout << "OverFlow" << endl;
            return;
        }
        else if(front == -1 && rear == -1){
            // empty case
            front++;
            rear++;
            arr[rear] = data;
        }
        else if(front != 0 && rear == size-1) {
            // circular nature
            rear = 0;
            arr[rear] = data;
        } else {
            // normal case
            rear++;
            arr[rear] = data;
        }
    }

    void pop_front(){
        if(front == -1 && rear == -1) {
            // underflow case
            cout << "Underflow" << endl;
            return;
        } else if(front == rear) {
            // single element
            arr[front] = -1;
            front  = -1;
            rear = -1;
        }
        else if(front == size-1) {
            // circular nature
            arr[front] = -1;
            front = 0;
        } else {
            // normal case
            arr[front] = -1;
            front++;
        }
    }

    void pop_back() {
        if(front == -1 && rear == -1) {
            // onderflow
            cout << "Underflow" << endl;
        } else if(front == rear) {
            // single element poping
            arr[rear] = -1;
            front = -1;
            rear = -1;
        } else if(rear == 0) {
            // circular nature
            arr[rear] = -1;
            rear = size-1;
        } else {
            arr[rear] = -1;
            rear--;
        }
    }

    void print() {
        cout << "Front : " << front << ", Rear : " << rear << endl;
        for(int i=0; i<size; i++){
            cout << arr[i] << " ";
        } cout << endl;
    }
};

int main() {

    return 0;
}