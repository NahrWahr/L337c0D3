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

int n, t;
vector<int> x;
vector<vector<int>> res;

void lesgo(int ind, vector<int> v, int sum)
{
  if(sum == t){
    res.push_back(v);
    return;
  }
  if(sum > t){
    return;
  }
  for(int i=ind;i<n;i++){
    if(i>0 && x[i]==x[i-1] && i>ind) continue;
    sum += x[i];
    v.push_back(x[i]);
    lesgo(i+1, v, sum);
    sum -= x[i];
    v.pop_back();
  }
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target)
{
  x = candidates;
  sort(x.begin(), x.end());
  n = x.size(), t = target;
  vector<int> v = {};
  lesgo(0, v, 0);
  
  return res;
}

int main()
{
  vector<int> x = {10,1,2,7,6,1,5};
  int t = 8;
  printM(combinationSum2(x, t));
  return 0;
}
