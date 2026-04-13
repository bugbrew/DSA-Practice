// 653. Two Sum IV - Input is a BST
#include <iostream>
#include <unordered_set>
using namespace std;

// Definition for binary tree node
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x)
    {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

class Solution
{
public:
    bool dfs(TreeNode *root, int k, unordered_set<int> &s)
    {
        if (!root)
            return false;

        if (s.count(k - root->val))
        {
            return true;
        }

        s.insert(root->val);

        return dfs(root->left, k, s) || dfs(root->right, k, s);
    }

    bool findTarget(TreeNode *root, int k)
    {
        unordered_set<int> s;
        return dfs(root, k, s);
    }
};

int main()
{
    /*
            5
           / \
          3   6
         / \   \
        2   4   7
    */

    TreeNode *root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);
    root->right->right = new TreeNode(7);

    Solution obj;
    int k = 9;

    if (obj.findTarget(root, k))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}