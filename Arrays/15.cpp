// 222. Count Complete Tree Nodes
#include <iostream>
using namespace std;

// Definition for a binary tree node

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

// Function to count nodes
int countNodes(TreeNode *root)
{
    if (root == nullptr)
        return 0;

    return 1 + countNodes(root->left) + countNodes(root->right);
}

int main()
{
    /*
        Creating this tree:

                1
               / \
              2   3
             / \
            4   5
    */

    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout << "Total nodes: " << countNodes(root) << endl;

    return 0;
}