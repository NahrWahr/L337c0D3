#include<bits/stdc++.h>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(NULL) {}
  ListNode(int x) : val(x), next(NULL) {}
};

ListNode* reverseList(ListNode *h)
{
  ListNode *prev=NULL;
  while(h){
    ListNode *tmp=h;
    h->next=prev;
    prev=h;
    h=tmp->next;
  }
  return prev;
}

int main()
{
  return 0;
}
