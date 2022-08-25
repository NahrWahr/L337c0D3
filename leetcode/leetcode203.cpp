#include<bits/stdc++.h>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* removeElements(ListNode *h, int v)
{
  if(h==NULL) return NULL;
  h->next = removeElements(h->next, v);
  return h->val==v? h->next : h;
}

int main()
{
  vector<int> x={1,1,2,2,1,1,2,2,1,2,1,2,2,1,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9};
  
  return 0;
}
