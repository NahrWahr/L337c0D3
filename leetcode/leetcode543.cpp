#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int dOBT(TreeNode *r, int &d)
{
  if(!r)
    return 0;
  int ld=dOBT(r->left, d);
  int rd=dOBT(r->right, d);
  d=max(d, ld+rd);
  return d+1;
}

int diameterOfBinaryTree(TreeNode *r, int d=0)
{
  dOBT(r, d);
  return d;
}

int main()
{
  return 0;
}
