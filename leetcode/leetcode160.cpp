#include<bits/stdc++.h>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

ListNode *getIntersectionNode(ListNode *hA, ListNode *hB)
{
  unordered_map<ListNode*, bool> mem;
  while(hA || hB){
    if(hA && mem[hA])
      return hA;
    if(hB && mem[hB])
      return hB;
    mem[hA] = true;
    mem[hB] = true;
    if(hA) hA=hA->next;
    if(hB) hB=hB->next;
  }
  return NULL;
}

int main()
{
  string s="Ding, Dong, gnod. : gnid";
  return 0;
}
