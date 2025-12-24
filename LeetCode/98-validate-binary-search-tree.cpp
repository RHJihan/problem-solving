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
    bool validate(TreeNode* node, long minVal, long maxVal) {
        if (node == nullptr) {
            return true;
        }

        if (node->val <= minVal || node->val >= maxVal) {
            return false;
        }

        bool leftIsValid = validate(node->left, minVal, node->val);
        if (!leftIsValid) {
            return false;
        }

        bool rightIsValid = validate(node->right, node->val, maxVal);
        if (!rightIsValid) {
            return false;
        }

        return true;
    }

    bool isValidBST(TreeNode* root) {
        return validate(root, LONG_MIN, LONG_MAX);
    }
};