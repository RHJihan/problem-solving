#include <iostream>
using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int max_dia = 0;

int dfs(TreeNode *node) {
  if (node == NULL) {
    return 0;
  }

  int left = dfs(node->left);
  int right = dfs(node->right);

  max_dia = max(max_dia, left + right);

  return 1 + max(left, right);
}

int diameterOfBinaryTree(TreeNode *root) {
  dfs(root);
  return max_dia;
}

int main() {
  TreeNode *root = new TreeNode(1);
  root->left = new TreeNode(2);
  root->right = new TreeNode(3);
  root->left->left = new TreeNode(4);
  root->left->right = new TreeNode(5);

  cout << diameterOfBinaryTree(root) << endl;

  return 0;
}
