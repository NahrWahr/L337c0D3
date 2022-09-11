#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
  ListNode *res= new ListNode();
  ListNode *ret = res;

  int c=0;
  while(l1 || l2){
    ListNode *tmp = new ListNode();
    int v=c;
    
    if(l1){
      v+=l1->val;
      l1=l1->next;
    }
    
    if(l2){
      v+=l2->val;
      l2=l2->next;
    }
    
    tmp->val = v%10;
    c = v/10;
    res->next=tmp;
    res=res->next;
  }
  
  if(c)
    res->next=new ListNode(1, NULL);
  
  return ret->next;
}
    
  
int main(){
  return 0;
}
