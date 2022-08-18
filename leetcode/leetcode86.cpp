#include<bits/stdc++.h>
using namespace std;

void printV(vector<int> v)
{
  for(int n:v){
    cout<<n<<' ';
  }
}

void printM(vector<vector<int>> m)
{
  for(vector<int> v:m){
    printV(v);
    cout<<'\n';
  }
}

struct ListNode{
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *n) : val(x), next(n) {}
};

ListNode* partition(ListNode* head, int t)
{
  ListNode n1(0),n2(0);
  ListNode *s=&n1, *l=&n2;
  
  while(head){
    if (head->val<t){
      s->next = head;
      s = s->next;
    }
    else{
      l->next = head;
      l = l->next;
    }
    head = head->next;
  }

  l->next=nullptr;
  s->next=n2.next;
  return n1.next;
}

void partition(vector<int> &v, int t)
{
  vector<int> s,l;
  for(int i:v){
    if (i<t)
      s.push_back(i);
    else
      l.push_back(i);
  }
  s.insert(s.end(), l.begin(), l.end());
  printV(s);
}
  
int main()
{
  vector<int> v = {1,4,3,2,5,2}; // -> {1,2,2,4,3,5}
  int t = 3;

  partition(v, t);
  return 0;
}
