#include<bits/stdc++.h>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

long long maximumProduct(vector<int> &x, int k)
{
  sort(x.begin(),x.end());
  for(int i=0;i<k;i++){
    x[min_element(x.begin(), x.end())-x.begin()]++;
  }
  auto op=[](long x, long y){return (x*y)%1000000007;};
  return reduce(x.begin(), x.end(), 1, op);
}

int main()
{
  vector<int> x={24,5,64,53,26,38};
  int k=54;
  cout<<maximumProduct(x, k);
  for(int i:x){
    cout<<i<<' ';
  }
  return 0;
}
