#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode *bstToGst(TreeNode *r)
{
  if(r==NULL){
    r->val=0;
    return r;
  }
  r->val = r->val + r->right->val;
  bstToGst(r->left);
  return r;
}

int main()
{
  return 0;
}
