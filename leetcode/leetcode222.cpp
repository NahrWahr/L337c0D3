#include<bits/stdc++.h>
using namespace std;

void printV(vector<int> v)
{
  for(auto i:v){
    cout<<i<<' ';
  }
  cout<<'\n';
}

void printM(vector<vector<int>> m)
{
  for(auto v:m){
    printV(v);
  }
}

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int countNodes(TreeNode *r)
{
  if(!r)
    return 0;

  TreeNode *left = r, *right = r;
  int height = 0;
  while(right){
    left=left->left;
    right=right->right;
    height++;
  }
  if(!left)
    return (1<<height) - 1;
  return 1 + countNodes(r->left) + countNodes(r->right);
}

int main()
{
  return 0;
}
