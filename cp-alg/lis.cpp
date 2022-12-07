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

int LenLIS(vector<int> &x)
{
  int n = x.size();
  
  vector<int> dp(n,1);
  for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
      if(x[j] < x[i])
	dp[i] = max(dp[i], dp[j] + 1);
    }
  }

  int res = 0;
  for(auto i:dp)
    res = max(res,i);
  return res;
}

int main()
{
  vector<int> x = {10,9,2,5,3,7,101,18};
  cout<<LenLIS(x);
  return 0;
}
