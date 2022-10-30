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

bool canPartitionKsubsets(vector<int> &x, int k)
{
  int n = x.size();
  sort(x.begin(),x.end());
  int sum = accumulate(x.begin(),x.end(), 0);
  int part = sum/k;
  if(sum%k || x.back()>part) return false;

  vector<vector<int>> dp(k, vector<int> (part+1));
  
  
  bool res=true;
  for(int i=0;i<k;i++){
    res = res && dp[i][part+1];
  }
  return res;
}

int main()
{
  return 0;
}
