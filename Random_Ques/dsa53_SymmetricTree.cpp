// 101. Symmetric Tree
#include <iostream>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x)
    {
        val = x;
        left = NULL;
        right = NULL;
    }
};

// Helper function to check mirror
bool isMirror(TreeNode *left, TreeNode *right)
{
    if (left == NULL && right == NULL)
        return true;
    if (left == NULL || right == NULL)
        return false;

    return (left->val == right->val) &&
           isMirror(left->left, right->right) &&
           isMirror(left->right, right->left);
}

// Main function
bool isSymmetric(TreeNode *root)
{
    if (root == NULL)
        return true;
    return isMirror(root->left, root->right);
}

int main()
{
    /*
            1
           / \
          2   2
         / \ / \
        3  4 4  3
    */

    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(2);

    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);

    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(3);

    if (isSymmetric(root))
        cout << "Tree is Symmetric";
    else
        cout << "Tree is NOT Symmetric";

    return 0;
}