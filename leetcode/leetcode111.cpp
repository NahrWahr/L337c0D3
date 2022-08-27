#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr){}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr){}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right){}
};

int countD(TreeNode *r, int d)
{
  if(r==NULL){
    return INT_MAX;
  }
  if(r->left==NULL && r->right==NULL){
    return d;
  }
  return min(countD(r->left, d+1), countD(r->right, d+1));
}

int minDepth(TreeNode *r)
{
  int d=0;
  if(r==NULL)
    return d;
  d=countD(r, d);
  return d;
}

int main()
{
  return 0;
}
