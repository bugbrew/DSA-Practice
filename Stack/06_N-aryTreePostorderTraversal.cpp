// 590. N-ary Tree Postorder Traversal
#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int val;
    vector<Node*> children;

    Node(int value) {
        val = value;
    }
};

class Solution {
public:
    vector<int> ans;

    void dfs(Node* root) {
        if (root == NULL)
            return;

        // Visit all children
        for (Node* child : root->children) {
            dfs(child);
        }

        ans.push_back(root->val);
    }

    vector<int> postorder(Node* root) {
        dfs(root);
        return ans;
    }
};

int main() {
    
    // Creating the tree
    Node* root = new Node(1);
    Node* node3 = new Node(3);
    Node* node2 = new Node(2);
    Node* node4 = new Node(4);
    Node* node5 = new Node(5);
    Node* node6 = new Node(6);

    root->children = {node3, node2, node4};
    node3->children = {node5, node6};

    Solution obj;
    vector<int> result = obj.postorder(root);

    cout << "Postorder Traversal: ";
    for (int x : result)
        cout << x << " ";

    return 0;
}