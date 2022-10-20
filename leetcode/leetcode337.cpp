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

int robc(vector<int> &x, int s, int f)
{
  int dp0 = 0, dp1 = 0, dp2 = 0;
  for(int i=f-1;i>=s; i--){
    dp0 = max(dp1, x[i] + dp2);
    dp2 = dp1;
    dp1 = dp0;
  }
  return dp0;
}

int main()
{
  return 0;
}
