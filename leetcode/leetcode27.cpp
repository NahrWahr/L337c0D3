#include<bits/stdc++.h>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int removeElement(vector<int> &x, int v)
{
  int j=0;
  for(int i:x){
    if(i==v)
      continue;
    x[j]=i;
    j++;
  }
  return j;
}

int main()
{
  vector<int> x={1,1,2,2,1,1,1,1,1,1,3,3};
  int v=2;
  cout<<removeElement(x, v);
  for(int i:x){
    cout<<i<<' ';
  }
  return 0;
}
