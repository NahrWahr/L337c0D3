#include<bits/stdc++.h>
using namespace std;

void printV(vector<bool> v){
  int n = v.size();
  for(int i=0;i<n;i++){
    cout<<i<<':'<<v[i]<<' ';
  }
  cout<<'\n';
}

bool canPartition(vector<int> &x)
{
  int n = x.size();
  sort(x.begin(),x.end());
  int sum = accumulate(x.begin(), x.end(), 0);
  int part = sum/2;
  cout<<sum<<' '<<part<<'\n';
  if(sum%2 || x.back()>part) return false;
  
  vector<bool> dp(part+1);
  dp[0] = 1;
  for(int i=0;i<n;i++){
    for(int j=part;j>=0;j--){
      if(x[i]>j)
	continue;
      dp[j] = (dp[j-x[i]] || dp[j]);
    }
  }
  printV(dp);
  return dp[part];
}

int main()
{
  vector<int> x = {23,13,11,7,6,5,5};
  cout<<canPartition(x);
  return 0;
}
