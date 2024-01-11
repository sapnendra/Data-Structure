#include<iostream>
using namespace std;

class CQueue{
public:
    int *arr;
    int size;
    int front;
    int rear;

    CQueue(int size) {
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    void push(int data) {
        if((front == 0 && rear == size-1) || front-rear == 1){
            //check full
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

    void pop(){
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
        cout << "Front : " << front << ", Rear : " << rear << endl;
        cout << "Printing queue: ";
        for(int i=0; i<size ; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    // creation
    CQueue q(5);
    q.print();

    q.push(20);
    q.print();

    q.push(30);
    q.print();

    q.push(40);
    q.print();

    q.push(50);
    q.print();

    q.push(60);
    q.print();

    q.push(60);

    q.pop();
    q.pop();
    q.pop();

    q.print();
    q.push(100);
    q.print();
    q.push(110);
    q.print();
    q.push(120);
    q.print();

    q.push(130);
    return 0;
}