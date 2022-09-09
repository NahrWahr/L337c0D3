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

bool isUgly(int n)
{
  while(n%2==0) n/=2;
  while(n%3==0) n/=3;
  while(n%5==0) n/=5;
  return n==1 ? false : true;
}

int main()
{
  int n=15;
  cout<<isUgly(n);
  return 0;
}
