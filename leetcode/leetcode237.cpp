#include<bits/stdc++.h>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void deleteNode(ListNode *n)
{
  *n=*(n->next);
}

int main()
{
  vector<int> x={24,5,64,53,26,38};
  int k=54;
  return 0;
}
