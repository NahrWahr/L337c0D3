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

bool isSymmetric(TreeNode* r)
{
     if(r->left==NULL ^ r->right==NULL)
	  return false;

     return true && (isSymmetric(r->left) && isSymmetric(r->right));
}

int main()
{
     
     return 0;
}
