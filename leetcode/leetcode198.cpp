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

vector<int> M;

// int dp(vector<int> &x, int i)
// {
//   if(i >= (int) x.size())
//     return 0;

//   if(M[i] != 0)
//     return M[i];
  
//   M[i] = max(x[i] + dp(x, i+2), dp(x, i+1));
//   printV(M);
//   return M[i];
// }

// int rob(vector<int> &x)
// {
//   int n = x.size();
//   M.resize(n);

//   return dp(x, 0);
// }

int rob(vector<int> x)
{
  int n = x.size();
  int dp0 = 0, dp1 = 0, dp2 = 0;
  for(int i=n-1;i>=0;i--){
    dp0 = max(dp1, x[i] + dp2);
    dp2 = dp1;
    dp1 = dp0;
  }
  return dp0;
}

int main()
{
  vector<int> x = {1,0,0,11};
  cout<<rob(x);
  return 0;
}
