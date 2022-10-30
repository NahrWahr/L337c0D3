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

int numTrees(int n)
{
  vector<int> dp(n+1);
  dp[0] = dp[1] = 1;

  for(int i=2;i<=n;i++){
    for(int j=1;j<=i;j++){
      dp[i] += dp[j-1] * dp[i-j];
    }
  }

  return dp[n];
}

int main()
{
  int n = 5;
  cout<<numTrees(n);
  return 0;
}
