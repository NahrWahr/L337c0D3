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

int coinChange(vector<int> &coins, int a, unordered_map<int, int> &mem)
{
  if(a<0)
    return -1;
  if(a==0)
    return 0;

  if(mem.find(a) != mem.end())
    return mem[a];
  
  int res = INT_MAX;
  for(int coin:coins){
    int tmp=-1;
    
    if(mem.find(a-coin) == mem.end()){
      tmp = coinChange(coins, a-coin, mem);
      mem[a-coin] = tmp;
    }
    else
      tmp = mem[a-coin];
    
    if(tmp<0)
      continue;
    
    res = min(res, 1+tmp);
  }
  return res;
}

int Change(vector<int> &c, int a)
{
  vector<int> dp(a+1, a+1);
  dp[0] = 0;

  for(int i=0;i<a+1;i++){
    for(int coin:c){
      if(i-coin<0)
	continue;
      dp[i] = min(dp[i], 1+dp[i-coin]);
    }
  }
  
  if(dp[a] == a+1)
    return -1;
  
  return dp[a];
}

int main()
{
  vector<int> coins = {1, 5, 10, 20, 50};
  int amt = 57;
  unordered_map<int,int> mem;

  cout<<coinChange(coins, amt, mem);
  return 0;
}
