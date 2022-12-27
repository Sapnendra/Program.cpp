#include<iostream>
#include<queue>
using namespace std;

class Queue {
    int *arr;
    int qfront;
    int rear;
    int size;

    public:
    // constructor
    Queue(int size) {
        this -> size = size;
        arr = new int[size];
        qfront = rear = 0;
    }

    void enQueue(int element) {
        if(rear == size - 1) {
            cout << "Queue is full" << endl;
        } else {
            arr[rear] = element;
            rear++;
        }
    }

    int deQueue() {
        if(qfront == rear) {
            return -1;
        } else {
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront == rear) {
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
    }

    bool isEmpty() {
        if(qfront == rear) {
            return true;
        } else {
            return false;
        }
    }

    int front() {
        if(isEmpty()) {
            return -1;
        } else {
            return arr[qfront];
        }
    }
};

int main() {
    Queue q(100001);

    q.enQueue(23);
    q.enQueue(24);
    q.enQueue(25);
    q.enQueue(26);
    q.enQueue(27);

    cout <<"Front element of the queue : "<< q.front() << endl;

    q.deQueue();
    q.deQueue();
    q.deQueue();
    q.deQueue();

    cout <<"Delete element of Queue : "<< q.deQueue() << endl;


    if(q.isEmpty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }

    return 0;
}