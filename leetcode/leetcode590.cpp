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

void trav(Node *rt, vector<int> &v)
{
  if(rt->children.size()==0){
    v.push_back(rt->val);
    return;
  }
  for(Node *c:rt->children){
    trav(c, v);
  }
  v.push_back(rt->val);
}

vector<int> postorder(Node *rt)
{
  vector<int> v;
  trav(rt, v);
  return v;
}

int main()
{
  return 0;
}
