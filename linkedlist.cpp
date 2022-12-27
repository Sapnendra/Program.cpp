#include<iostream>
using namespace std;

class Node {

    public:
    int data;
    Node* next;
    
    // Constructor
    Node(int value) {
        this -> data = value;
        this -> next = NULL;
    }
};

int main() {
    Node* head = new Node(10);
    cout << head -> data << endl;
    cout << head -> next << endl;
    return 0;
}