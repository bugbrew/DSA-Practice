// 144. Binary Tree Preorder Traversal
#include <iostream>
#include <vector>
using namespace std;

// Tree Node definition
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

    void preorder(TreeNode *root){
        if (root == NULL)
            return;

        ans.push_back(root->val);
        preorder(root->left);    
        preorder(root->right);   
    }

    vector<int> preorderTraversal(TreeNode *root){
        preorder(root);
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
    vector<int> result = sol.preorderTraversal(root);

    cout << "Preorder Traversal: ";

    for (int x : result){
        cout << x << " ";
    }

    return 0;
}
