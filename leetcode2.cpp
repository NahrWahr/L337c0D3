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
  int carry = 0;
  int sum = 0;
  sum = (l1->val + l2->val);
  int NewVal = sum%10;
  carry = sum/10;
  return 0;
}
    
  
int main(){
  vector<int> l1 = {1, 1, 1, 1};
  vector<int> l2 = {1, 1, 1, 1};
  vector<int> ans;
  for (auto n : ans){
    cout << n << " ";
  }
  return 0;
}
