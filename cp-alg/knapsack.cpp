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

int ks(int w, vector<int> wt, vector<int> v)
{
  int n = wt.size();

  vector<int> dp(w+1);
  for(int i=0;i<n;i++){
    for(int j=w;j>=0;j--){
      if(wt[i] > j)
	continue;
      else
	dp[j] = max(dp[j],
		    dp[j-wt[i]] + v[i]);
    }
    printV(dp);
  }
  
  return dp[w];
}

int main()
{
  int w = 10;
  vector<int> wt = { 2, 3, 7};
  vector<int> v = { 3, 9, 18 };
  cout<<ks(w,wt,v);
  return 0;
}
