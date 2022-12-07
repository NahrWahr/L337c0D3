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

int sumSubarrayMinsStupid(vector<int> &x)
{
  int res=0, n=x.size();
  vector<vector<int>> dp(n,vector<int> (n));
  for(int i=0;i<n;i++){
    dp[i][i] = x[i];
    res+=x[i];
  }
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      dp[i][j] = min(dp[i][j-1], x[j]);
      res+=dp[i][j];
    }
  }

  return res;
}

int sumSubarrayMins(vector<int> &x)
{
  int res=0, n=x.size();
  vector<int> mem(n);
  stack<int> min;
  for(int i=0;i<n;i++){
    if(!min.empty() && min.top() > x[i])
      min.push(x[i]);
  }

  return res;
}

int main()
{
  vector<int> x = {3,1,2,4};
  cout<<sumSubarrayMins(x);
  return 0;
}
