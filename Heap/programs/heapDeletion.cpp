#include<iostream>
using namespace std;

class Heap {
public: 
    int *arr;
    int capacity;
    int size;
    
    Heap(int capacity) {
        this->arr = new int[capacity];
        this->capacity = capacity;
        // size - current number of elements in heap;
        this->size = 0;
    }

    void insert(int val) {
        if(size == capacity) {
            cout << "Heap Overflow" << endl;
            return;
        }
        // size will increase here
        size++;
        int index = size;
        arr[index] = val;

        // take the value to its correct position
        while(index > 1) {
            int parentIndex = index/2;
            if(arr[index] > arr[parentIndex]) {
                swap(arr[index], arr[parentIndex]);
                index = parentIndex;
            } else {
                break;
            }
        }
    }

    int deleteFromHeap() {
        // store root element
        int answer = arr[1];
        // replace root element with last element
        arr[1] = arr[size];
        // delete last element from its original position
        size--;

        // heapification
        int index = 1;
        while(index < size) {
            int leftIndex = 2*index;
            int rightIndex  = 2*index + 1;

            // find out which index value is max
            int largestValueIndex = index;
            // check left element
            if(leftIndex <= size && arr[largestValueIndex] < arr[leftIndex]) {
                largestValueIndex = leftIndex;
            }
            // check right element
            if(rightIndex <= size && arr[largestValueIndex] < arr[rightIndex]) {
                largestValueIndex = rightIndex;
            }

            // no change
            if(index == largestValueIndex) {
                break;
            }
            else {
                swap(arr[index], arr[largestValueIndex]);
                index = largestValueIndex;
            }
        }
        return answer;
    }

    void printHeap() {
        for(int i=1; i<=size; i++) {
            cout << arr[i] <<" ";
        } cout << endl;
    }
};

int main() {
    Heap h(20);
    // insertion
    h.insert(10);
    h.insert(20);
    h.insert(5);
    h.insert(11);
    h.insert(6);

    cout << "Printing the content of heap : " << endl;
    h.printHeap();

    int ans = h.deleteFromHeap();
    cout << "Answer : " << ans << endl;

    cout << "Printing the content of heap : " << endl;
    h.printHeap();

    return 0;
}