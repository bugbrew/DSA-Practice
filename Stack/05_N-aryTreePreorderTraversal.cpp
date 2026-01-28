// 589. N-ary Tree Preorder Traversal
#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int val;
    vector<Node*> children;

    // Constructor
    Node(int _val){
        val = _val;
    }
};

class Solution{
public:
    vector<int> result;
    vector<int> preorder(Node* root){
        // Base case
        if(root == NULL){
            return result;
        }

        result.push_back(root -> val);

        for(Node* child: root-> children){
            preorder(child);
        }
        return result;
    }
};
int main(){
    /*
    Tree structure:
                1
             /  |  \
            3   2   4
           / \
          5   6
    */

    Node *root = new Node(1);
    Node *node3 = new Node(3);
    Node *node2 = new Node(2);
    Node *node4 = new Node(4);
    Node *node5 = new Node(5);
    Node *node6 = new Node(6);

    root->children.push_back(node3);
    root->children.push_back(node2);
    root->children.push_back(node4);

    node3->children.push_back(node5);
    node3->children.push_back(node6);

    Solution obj;
    vector<int> ans = obj.preorder(root);

    // Printing the result
    cout<< "Preorder Traversal: ";
    for(int x : ans){
        cout << x << " ";
    }
    return 0;
}