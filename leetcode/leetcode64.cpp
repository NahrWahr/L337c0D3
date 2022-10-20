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

int m,n;
vector<vector<int>> dp;

int minPathSum(vector<vector<int>> &g)
{
  m = g.size(),n = g[0].size();
  dp.resize(m, vector<int> (n));

  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){

      if(i==0 && j==0){
	dp[i][j] = g[i][j];
      }
      
      if(i==0){
	dp[i][j] = dp[i][j-1]+g[i][j];
	continue;
      }

      if(j==0){
	dp[i][j] = dp[i-1][j]+g[i][j];
	continue;
      }

      dp[i][j] = min(dp[i][j-1] + g[i][j],
		     dp[i-1][j] + g[i][j]);
    }
  }

  return dp[m-1][n-1];
}

int main()
{
  vector<vector<int>> g = {{1,3,1},{1,5,1},{4,2,1}};
  cout<<minPathSum(g);
  return 0;
}
