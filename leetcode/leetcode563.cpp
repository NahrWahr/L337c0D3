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

int findTilt(TreeNode *r, int sum, int &tilt)
{
  if(!r)
    return 0;

  tilt += abs(findTilt(r->left, sum, tilt) - findTilt(r->right, sum, tilt));
  return sum+r->val;
}
int findTilt(TreeNode *r)
{
  int sum=0;
  int tilt=0;
  findTilt(r, sum, tilt);
  return tilt;//- r->val;
}

int main()
{
  return 0;
}
