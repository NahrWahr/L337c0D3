#include<bits/stdc++.h>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void createList(ListNode* &a, vector<int> x)
{
  int n = x.size();
  ListNode* ret = a;
  ret->val = x[0];
  for(int i=1;i<n;i++){
    ListNode *tmp = new ListNode;
    tmp -> val = x[i];
    ret->next = tmp;
    ret = tmp;
  }
}

void printlist(ListNode* a)
{
  while(a){
    cout<< a->val << ' ';
    a = a->next;
  }
}

void deleteNode(ListNode *n)
{
  *n=*n->next;
}

int main()
{
  vector<int> x={24,5,64,53,26,38};
  ListNode* input = new ListNode;
  createList(input, x);
  printlist(input);
  return 0;
}
