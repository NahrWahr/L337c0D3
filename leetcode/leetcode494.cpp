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

vector<int> x;
int n,res;

void DFS(int s, int t)
{
  if(s >= n){
    if(t == 0){
      res++;
    } 
    return;
  }
  
  DFS(s+1, t-x[s]);
  DFS(s+1, t+x[s]);
}

int findTargetSumWays(vector<int>& nums, int t)
{
  res = 0;
  x = nums;
  n = x.size();
  
  DFS(0, t);
  return res;
}

int main()
{
  vector<int> nums = {1,1,1,1,1};
  int target = 3;
  cout<<findTargetSumWays(nums, target);
  return 0;
}
