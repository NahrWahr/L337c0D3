#include<bits/stdc++.h>
using namespace std;

void printV(vector<int> v){
  for(int i:v){
    cout<<i<<' ';
  }
  cout<<'\n';
}

void printM(vector<vector<int>> m){
  for(vector<int> v:m){
    printV(v);
  }
}

int lengthOfLIS(vector<int> &x)
{
  int n = x.size();
  vector<int> dp(n,1);
  for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
      if(x[j]<x[i])
	dp[i] = max(dp[i], dp[j]+1);
    }
  }

  printV(dp);
  return dp[n-1];
}

int main()
{
  vector<int> x = {1,3,61,23,4,6,41,8,600};
  lengthOfLIS(x);
  return 0;
}
