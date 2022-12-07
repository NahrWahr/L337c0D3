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

int numberOfArithmeticSlices(vector<int>& x)
{
  int n = x.size();
  vector<int> diff(n-1);
  for(int i=1;i<n;i++){
    diff[i-1] = x[i] - x[i-1];
  }

  vector<int> dp(n-1,2);
  for(int i=0;i<n-1;i++){
    for(int j=0;j<i;j++){
      if(diff[j] == diff[i])
	dp[i] = max(dp[i], dp[j] + 1);
    }
  }
  printV(dp);

  int res = 0;
  for(int i:dp){
    if(i>=3)
      res += i-2;
  }
  return res;
}


int main()
{
  vector<int> x = {2,4,6,8,10};
  vector<int> y = {7,7,7,7,7};
  cout<<numberOfArithmeticSlices(x);
  return 0;
}
