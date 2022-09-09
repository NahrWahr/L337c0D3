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

int addDigits(int n)
{
  int s=n;
  while(s/10){
    s=0;
    while(n){
      s+=n%10;
      n=n/10;
    }
    n=s;
  }
  return s;
}

int main()
{
  int n=57;
  cout<<addDigits(n);
  return 0;
}
