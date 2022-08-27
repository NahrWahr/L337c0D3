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

void helper(TreeNode *rt, vector<vector<int>> &v,int d)
{
  if(rt==NULL){
    return;
  }
  if(v.size()==d){
    v.push_back(vector<int> ());
  }
  v[d].push_back(rt->val);
  helper(rt->left, v, d+1);
  helper(rt->right, v, d+1);
}

vector<vector<int>> levelOrder(TreeNode *rt)
{
  vector<vector<int>> v;
  helper(rt, v, 0);
  return v;
}

int main()
{
  return 0;
}
