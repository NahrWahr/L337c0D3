#include<bits/stdc++.h>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void moveZeroes(vector<int> &x)
{
  int j=0;
  int n=x.size();
  for(int i:x){
    if(i==0)
      continue;
    x[j]=i;
    j++;
  }
  
  for(int i=j;i<n;i++){
    x[i]=0;
  }
}

int main()
{
  vector<int> x={1,1,2,2,0,1,1,0,1,0,0,1,3,3};
  moveZeroes(x);
  for(int i:x){
    cout<<i<<' ';
  }
  return 0;
}
