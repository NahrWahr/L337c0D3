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

bool check(TreeNode *rt1, TreeNode *rt2)
{
  if(rt1==NULL && rt2==NULL)
    return true;
  if(rt1==NULL ^ rt2==NULL)
    return false;
  if(rt1->val!=rt2->val)
    return false;

  return check(rt1->left, rt2->right) && check(rt1->right, rt2->left);
}

bool isSymmetric(TreeNode* rt)
{
  if(rt==NULL)
    return true;

  return check(rt->left, rt->right);
}

int main()
{
     return 0;
}
