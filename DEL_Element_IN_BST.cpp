#include<stdio.h>
#include<iostream>
#include<malloc.h>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data){
    struct node *n;
    n = (struct node *) malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL; 
    return n;
}

void inOrder(struct  node* root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

struct node* inOrderPredecessor(struct node* root) {
    root = root->left;
    while(root->right != NULL) {
        root = root->right;
    }
    return root;
}

struct node* deleteNode(struct node* root, int value) {
    struct node* ipre;
    if(root == NULL) {
        return NULL;
    }
    if( root->left == NULL && root->right == NULL) {
        free(root);
        return NULL;
    }
    if( value< root->data) {
        root->left = deleteNode(root->left,value);
    }
    else if(value > root->data) {
        root->right = deleteNode(root->right,value);
    }
    else {
        ipre = inOrderPredecessor(root);
        root->data = ipre->data;
        root->left = deleteNode(root->left,ipre->data);
    }
    return root;
}

int main(){
     
    
    struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(7);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);
   
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    inOrder(p);
    deleteNode(p,3);
    cout << endl;
    cout<<"Root Data is: "<< p->data << endl;
    inOrder(p);
    
}