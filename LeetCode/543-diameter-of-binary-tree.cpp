/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int max_dia = 0;

    int dfs(TreeNode* node) {
        if (node == NULL) {
            return 0;
        }

        int left = dfs(node->left);
        int right = dfs(node->right);

        max_dia = max(max_dia, left + right);

        return 1 + max(left, right);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return max_dia;
    }
};