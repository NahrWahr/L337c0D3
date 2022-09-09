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

void helper(TreeNode *r, int t, vector<vector<int>> &res, vector<int> v)
{
  if(t<0 || r==NULL)
    return;
  if(r->left==NULL && r->right==NULL){
      if(t==0)
	res.push_back(v);
      return;
  }

  v.push_back(r->val);
  t = t - r->val;
  helper(r->left, t, res, v);
  helper(r->right, t, res, v);
}

vector<vector<int>> pathSum(TreeNode *r, int t)
{
  vector<vector<int>> res;
  vector<int> v;
  helper(r, t, res, v);
  return res;
}

int main()
{
  return 0;
}
