#include<iostream>
using namespace std;
//Input: 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1

//OUTPUT:-
//Pre-Order: 1 2 4 5 7 3 6 
//Inorder: 4 2 7 5 1 3 6
//Post-Order: 4 7 5 2 6 3 1 

class Node{

public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        data = d;
        left = right = NULL;
    } 
};

//Build of the Tree - Root, Left, Right Tree
Node* buildTree(){
    int d;
    cin>>d;

    if(d==-1){
        return NULL;
    }
    Node* n = new Node(d);
    n->left = buildTree();
    n->right = buildTree();
    return n;
}

void printPreorder(Node *root){
    if(root==NULL){
        return;
    }
    cout<< root->data <<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}

void printInorder(Node *root){
    if(root==NULL){
        return;
    }
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}

void printPostorder(Node *root){
    if(root==NULL){
        return;
    }
    printPostorder(root->left);
    printPostorder(root->right);
    cout<< root->data <<" ";
}
// class Tree{
    // Node * root;
    // Methods

// };

int main(){

    Node*root = buildTree();
    // printPreorder(root);
    // printInorder(root);
    printPostorder(root);
    return 0;
}