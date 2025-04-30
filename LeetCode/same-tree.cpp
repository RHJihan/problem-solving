#include <iostream>
using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool isSameTree(TreeNode *p, TreeNode *q) {
  if (p == NULL && q == NULL) {
    return true;
  }

  if (p == NULL || q == NULL) {
    return false;
  }

  if (p->val != q->val) {
    return false;
  }

  return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}

TreeNode *buildTree1() {
  TreeNode *root = new TreeNode(1);
  root->left = new TreeNode(2);
  root->right = new TreeNode(3);
  return root;
}

TreeNode *buildTree2() {
  TreeNode *root = new TreeNode(1);
  root->left = new TreeNode(2);
  root->right = new TreeNode(3);
  return root;
}

int main() {

  TreeNode *p1 = buildTree1();
  TreeNode *q1 = buildTree2();
  cout << (isSameTree(p1, q1) ? "true" : "false") << endl;

  return 0;
}
