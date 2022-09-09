#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode *lowestCommonAncestor(TreeNode *r,
			       TreeNode *p,
			       TreeNode *q)
{
  if(r->val < p->val
     &&
     r->val < q->val)
    return lowestCommonAncestor(r->right, p, q);
  
  if(r->val > p->val
     &&
     r->val > q->val)
    return lowestCommonAncestor(r->left, p, q);
  
  return r;
}

int main()
{
  return 0;
}
