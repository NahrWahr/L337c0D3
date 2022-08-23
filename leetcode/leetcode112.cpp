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

bool hasPathSum(TreeNode *r, int t)
{
  if(r == NULL)
    return false;
  t = t-r->val;
  if((t==0) && (r->left==NULL) && (r->right==NULL))
    return true;
  
  return hasPathSum(r->left, t) || hasPathSum(r->right, t);
}

int main(){
  
  return 0;
}
