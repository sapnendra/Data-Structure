#include<iostream>
using namespace std;

class Queue{
public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size) {
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    void push(int data) {
        if(front == 0 && rear == size-1){
            //check full
            cout << "Queue is OverFlow" << endl;
            return;
        }
        else if(front == -1 && rear == -1){
            // empty case
            front++;
            rear++;
            arr[rear] = data;
        } else {
            // normal case
            rear++;
            arr[rear] = data;
        }
    }

    void pop(){
        // underflow case
        if(front == -1 && rear == -1) {
            cout << "Queue is underflow" << endl;
            return;
        } else if(front == rear) {
            // empty case -> single element
            arr[front] = -1;
            front  = -1;
            rear = -1;
        } else {
            // normal case
            arr[front] = -1;
            front++;
        }
    }

    int getSize(){
        if(front == -1 && rear == -1) {
            return 0;
        } else {
            return rear-front+1;
        }
    }

    int getFront(){
        if(front == -1) {
            cout << "No element in queue, cannot give front element" << endl;
            return -1;
        } else {
            return arr[front];
        }
    }

    int getBack(){
        if(rear == -1) {
            cout << "No element in queue, cannot give front element" << endl;
            return -1;
        } else {
            return arr[rear];
        }
    }

    bool isEmpty(){
        if(front == -1 && rear == -1) {
            return true;
        } else {
            return false;
        }
    }

    void print(){
        cout << "Printing queue: ";
        for(int i=0; i<size ; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    // creation
    Queue q(5);
    q.print();

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.print();

    q.pop();
    q.print();
    cout << "Size of queue : " << q.getSize() << endl;
    if(q.isEmpty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }
    cout << "Front element : " << q.getFront() << endl;
    cout << "Back element : " << q.getBack() << endl;

    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.print();
    cout << "Size of queue : " << q.getSize() << endl;
    return 0;
}