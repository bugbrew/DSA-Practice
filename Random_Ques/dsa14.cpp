#include<iostream>
using namespace std;

class Node{
public:
    int key;
    Node* left;
    Node* right;

    Node(int key){
        this -> key = key;
        left = right = NULL;

    }
};
Node* insert(Node* root, int key){
    if(root == NULL){
        return new Node(key);
    }
    if(key < root -> key){
        root -> left = insert(root->left, key);
    }
}

int main(){
    Node* root = NULL;
    int nums[] = {-10, -3, 0, 5, 9};
    for(int x : nums){
        root = insert(root, x);
    }
    return 0;
}