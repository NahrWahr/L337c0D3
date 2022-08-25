#include<bits/stdc++.h>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* deleteMiddle(ListNode *h)
{
  ListNode* l=h;
  int n=0, p=0;
  
  while(h!=NULL){
    n++;
    h=h->next;
  }
  h=l;
  
  if(n/2==0)
    return NULL;
  
  while(h!=NULL){
    p++;
    if(p==n/2)
      h->next=h->next->next;
    else
      h=h->next;
  }
  
  return l;
}

int main()
{
  vector<int> x={24,5,64,53,26,38};
  int k=54;
  return 0;
}
