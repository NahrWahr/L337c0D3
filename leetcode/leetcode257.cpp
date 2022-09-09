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

void helper(TreeNode *r, vector<string> &res, string s)
{
  if(r->left==NULL && r->right==NULL){
    s = s+"->"+to_string(r->val);
    res.push_back(s);
    return;
  }
  s+="->"+to_string(r->val);
  helper(r->left, res, s);
  helper(r->right, res, s);
  return;
}

vector<string> binaryTreePaths(TreeNode *r)
{
  vector<string> res;
  string s;
  helper(r, res, s);
  return res;
}

int main()
{
  return 0;
}
