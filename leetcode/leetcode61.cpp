#include<bits/stdc++.h>
using namespace std;

void printV(vector<int> v){
  for(int i:v){
    cout<<i<<' ';
  }
  cout<<'\n';
}

void printM(vector<vector<int>> m){
  for(vector<int> v:m){
    printV(v);
  }
}

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* rotateRight(ListNode* h, int k)
{
  if(!h || !h->next)
    return h;

  auto tmp = h;
  int l = 1;
  while(tmp->next){
    tmp = tmp->next;
    l++;
  }

  tmp->next = h;
  tmp = h;

  int rot = l-(k%l)-1;
  for(int i=0;i<rot;i++){
    tmp = tmp->next;
  }

  h = tmp->next;

  tmp->next = nullptr;
  return h;
}

int main()
{
  return 0;
}
