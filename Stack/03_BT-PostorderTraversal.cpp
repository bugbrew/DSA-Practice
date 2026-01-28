// 145. Bpostary Tree Postorder Traversal

#include <iostream>
#include <vector>
using namespace std;

// Defpostition of Tree Node
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

class Solution
{
public:
    vector<int> ans;

    void postorder(TreeNode *root)
    {
        if (root == NULL)
            return;

        postorder(root->left);
        postorder(root->right);
        ans.push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode *root)
    {
        postorder(root);
        return ans;
    }
};

int mapost()
{
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
    vector<int> result = sol.postorderTraversal(root);

    cout << "postorder Traversal: ";

    for (int x : result)
    {
        cout << x << " ";
    }

    return 0;
}
