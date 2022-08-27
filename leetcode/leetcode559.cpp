#include<bits/stdc++.h>
using namespace std;

class Node {
public:
  int val;
  vector<Node*> children;

  Node() {}

  Node(int _val) {
    val = _val;
  }

  Node(int _val, vector<Node*> _children) {
    val = _val;
    children = _children;
  }
};

int maxDepth(Node *n)
{
  int d=0;
  if(n==NULL)
    return d;
  for(Node *c:n->children){
    d=max(d,maxDepth(c));
  }
  return d;
}

int main()
{
  return 0;
}
