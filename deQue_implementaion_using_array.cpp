#include<iostream>
using namespace std;

class deQue {
    int *arr;
    int front;
    int rear;
    int size;

    // constructor
    deQue(int n) {
        size = n;
        front = -1;
        rear = -1;
        arr = new int[n];
    }

    void pushFront(int value) {
        if(isFull()) {   // To chack queue is full
            cout <<"Queue is full"<< endl;
        }
        else if(isEmpty()) {          // first element insert
            front = rear = 0;
            arr[front] = value;
        }
        else if(front == 0) {           // cyclic nature/behaviour
            front = size -1;
        }
        else {                      // normal flow
            front--;
        }
    }

    void pushBack(int value) {
        if(isFull() ) {  // To chack queue is full
            cout <<"Queue id full" << endl;
        }
        else if(isEmpty()) {                       // first element insert
            front = rear = 0;
            arr[rear] = value;
        }
        else if(rear == size -1 && front != 0) {           // cyclic nature/behaviour
            rear = 0;
            arr[rear] = value;
        }
        else {                // normal flow
            rear++;
            arr[rear] = value;
        }
    }

    void popFront() {
        if(isEmpty()) {                   // to check queue is empty or not
            cout<<"Queue is empty"<< endl;
        }
        else if(front == rear) {                       // to check queue is empty or not
            front = rear = -1;
        }
        else if(front == size - 1) {                      // cyclic nature/behaviour
            front = 0;
        }
        else {                                      // normal flow
            front++;
        }
    }

    void popBack() {
        if(isEmpty()) {                  // to check queue is empty or not
            cout <<"Queue is empty"<< endl;
        }
        else if(front == rear) {                  // to check queue is empty or not
            front = rear = -1;
        }
        else if(rear == 0) {                   // cyclic nature/behaviour
            rear = size -1;
        } 
        else {                          // normal flow
            rear--;
        }
    }

    int getRear() {
        if(isEmpty()) {
            return -1;
        } 
        else {
            return arr[rear];
        }
    }

    int getFront() {
        if(isEmpty()) {
            return -1;
        } 
        else {
            return arr[front];
        }
    }


    bool isEmpty() {
        if(front == -1) {
            return true;
        }
        else {
            return false;
        }
    }

    bool isFull() {
        if(front == 0 && rear == size -1 || front != 0 && rear == (front - 1)%(size - 1)) {
            return true;
        } 
        else {
            return false;
        }
    }
};