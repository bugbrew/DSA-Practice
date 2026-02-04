// 257. Binary Tree Paths
#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.
 */
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
public:
    vector<string> result;

    void dfs(TreeNode *node, string path)
    {
        if (!node)
            return;

        path += to_string(node->val);

        // leaf node
        if (!node->left && !node->right)
        {
            result.push_back(path);
            return;
        }

        path += "->";
        dfs(node->left, path);
        dfs(node->right, path);
    }

    vector<string> binaryTreePaths(TreeNode *root)
    {
        if (!root)
            return {};
        dfs(root, "");
        return result;
    }
};

int main()
{
    /*
        Example Tree:
              1
             / \
            2   3
             \
              5

        Output:
        1->2->5
        1->3
    */

    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(5);

    Solution sol;
    vector<string> paths = sol.binaryTreePaths(root);

    for (string s : paths)
    {
        cout << s << endl;
    }

    return 0;
}
