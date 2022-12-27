#include<iostream>
#include<queue>
using namespace std;

class circularQueue {
    int *arr;
    int front;
    int rear;
    int size;

    public:
    // constructor
    circularQueue(int n) {
        size == 100001;
        front = rear = -1;
        arr = new int[size];
    }
    // insertion
    bool enQueue(int element) {
        if(front == 0 && rear == size -1 || rear == (front - 1)%(size - 1)) {
            cout << "Queue is full" << endl;
            return false;
        }
        else if(front == -1) {     // frist element insert
            front = rear = 0;
        }
        else if(front == size - 1 && front != 0) {
            // cyclic nature maintain
            rear = 0;
        }
        else {
            // normal flow
            rear++;
        }
        // push inside the queue
        arr[rear] = element;
        return true;
    }

    int deQueue() {
        if(front == -1 && rear == -1) {             // To check whether the queue is empty or not
            cout <<"Queue is empty" << endl;
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        if(front == rear) {                          // If single element is present
            front = rear = -1;
        }
        else if(front = size -1) {  // To maintain cyclic nature
            front = 0;
        }
        else {
            front++;
        }
    }
};

int main() {
    // your code here
    return 0;
}