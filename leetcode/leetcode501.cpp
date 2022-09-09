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

void findMode(TreeNode *r, map<int,int> &count)
{
  if(r==NULL)
    return;
  count[r->val]++;
  findMode(r->left, count);
  findMode(r->right, count);
}

vector<int> findMode(TreeNode *r)
{
  vector<int> res;
  map<int,int> count;
  findMode(r, count);
  int maxc=0;
  for(auto i:count){
    maxc=max(maxc, i.second);
  }
  for(auto i:count){
    if(i.second==maxc)
      res.push_back(i.first);
  }
  return res;
}

int main()
{
  return 0;
}
