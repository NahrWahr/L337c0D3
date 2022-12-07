#include<bits/stdc++.h>
using namespace std;

void printV(vector<int> v)
{
  for(auto i:v){
    cout<<i<<' ';
  }
  cout<<'\n';
}

void printM(vector<vector<int>> m)
{
  for(auto v:m){
    printV(v);
  }
}

long sol(vector<int> p, int a)
{
  int n = p.size();
  vector<int> dp(n+1); dp[n] = 1;
  for(int i=n-1;i>=0;i--){
    dp[i] = min(dp[i+1]+p[i], dp[i+1]+p[i]-a);
    dp[i] = dp[i]<=0 ? 1 : dp[i];
  }
  return dp[0];
}

int main()
{
  vector<int> p = {1,2,6,7};
  int a = 5;
  cout<<sol(p,a);
  return 0;
}
