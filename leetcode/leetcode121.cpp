#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &x)
{
  int n=x.size();
  int b=INT_MAX;
  int p=0;

  for(int i=0; i<n; i++){
    b=min(b, x[i]);
    p=max(p, x[i]-b);
  }
  
  return p;
}

int main()
{
  vector<int> x = {1,2,3,23,4,2,21,2,4,3,21,34};
  cout<<maxProfit(x);
  std::max(7,8);
  return 0;
}
