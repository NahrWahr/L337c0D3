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

void L2R(TreeNode *r, vector<int> &v)
{
  if((r->left==NULL) && (r->right==NULL)){
    v.push_back(r->val);
    return;
  }
  
  L2R(r->left, v);
  v.push_back(r->val);
  L2R(r->right, v);
}

vector<int> inorderTraversal(TreeNode *r)
{
  vector<int> v;
  L2R(r, v);
  return v;
}

vector<int> MorrisTraversal(TreeNode *r)
{
  vector<int> v;
  while(r){
    if(r->left){
      TreeNode *p=r->left;
      while(p->right && p->right !=r){
	p=p->right;
      }
      if(!p->right){
	p->right=r;
	r=r->left;
      }
      else{
	p->right=NULL;
	v.push_back(r->val);
	r=r->right;
      }
    }
    else{
      v.push_back(r->val);
      r=r->right;
    }
  }
  return v;
}

int main()
{
  return 0;
}
