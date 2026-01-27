// 94. Binary Tree Inorder Traversal
#include <iostream>
#include <vector>
using namespace std;

// Definition of Tree Node
struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x){
        val = x;
        left = NULL;
        right = NULL;
    }
};

class Solution{
public:
    vector<int> ans;

    void inorder(TreeNode *root){
        if (root == NULL)
            return;

        inorder(root->left);      // Left
        ans.push_back(root->val); // Root
        inorder(root->right);     // Right
    }

    vector<int> inorderTraversal(TreeNode *root){
        inorder(root);
        return ans;
    }
};

int main(){
    /*
        Tree used:
             1
              \
               2
              /
             3
    */

    TreeNode *root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    Solution sol;
    vector<int> result = sol.inorderTraversal(root);

    cout << "Inorder Traversal: ";
    
    for (int x : result){
        cout << x << " ";
    }

    return 0;
}
