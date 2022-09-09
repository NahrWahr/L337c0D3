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

int sumOfLeftLeaves(TreeNode *r, bool add=false)
{
  if(r==NULL)
    return 0;
  if(r->left == NULL
     &&
     r->right == NULL){
    if(add){
      return r->val;
    }
  }
  int sum=0;
  sum+=sumOfLeftLeaves(r->left, true);
  sum+=sumOfLeftLeaves(r->right, false);
  return sum;
}

int main()
{
  return 0;
}
