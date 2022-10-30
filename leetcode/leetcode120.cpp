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

vector<vector<int>> dp;
int minimumTotal(vector<vector<int>>& t, int h = 0, int i = 0)
{
  int n = t.size();
  
  if(h>=n)
    return 0;
  if(i<0 || i>h)
    return INT_MAX/10;
  
  if(!h && !i)
    dp.resize(n, vector<int> (n,INT_MAX));
  
  if(dp[h][i] != INT_MAX)
    return dp[h][i];
  
  int res = t[h][i] + min(minimumTotal(t, h+1, i-1),
			  min(minimumTotal(t, h+1, i),
			      minimumTotal(t, h+1, i+1)));
  dp[h][i] = res;
  
  return res;
}

int main()
{
  return 0;
}
