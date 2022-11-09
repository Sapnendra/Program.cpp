#include<iostream>
#include<stdio.h>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data) {
    struct node* n;
    n = (struct node*) malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void bstMin( node* root ) {
    if( root == NULL) {
        cout << "Element is already present in BST" << endl;
    }
    while(root->left!=NULL) {
        root = root->left;
    }
    cout << root->data << endl;
}

int main() {
    struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);


    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
        bstMin(p);

    return 0;
}