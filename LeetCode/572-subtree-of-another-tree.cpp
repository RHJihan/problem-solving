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
    bool isSame(TreeNode* p, TreeNode* q) {
        if (p == NULL || q == NULL) {
            return p == q;
        }

        bool isLeftSame = isSame(p->left, q->left);
        bool isRightSame = isSame(p->right, q->right);

        return p->val == q->val && isLeftSame && isRightSame;
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (root == NULL || subRoot == NULL) {
            return root == subRoot;
        }

        if (root->val == subRoot->val) {
            if (isSame(root, subRoot)) {
                return true;
            }
        }

        return isSubtree(root->left, subRoot) ||
               isSubtree(root->right, subRoot);
    }
};