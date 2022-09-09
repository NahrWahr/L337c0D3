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

void help(TreeNode *r, int &mind, TreeNode* &p)
{
  if(r->left) help(r->left, mind, p);
  if(p) mind=min(mind, abs(p->val - r->val));
  p=r;
  if(r->right) help(r->right, mind, p);
}

int getMinimumDifference(TreeNode* r,
			 int mind=INT_MAX,
			 TreeNode* p=NULL)
{
  if(r==NULL)
    return INT_MAX;

  help(r, mind, p);
  
  return mind;
}

int main()
{
  return 0;
}
