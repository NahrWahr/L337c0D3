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

vector<int> stupidKsum(vector<int> &x, int i=0, vector<int> res, int k, int t)
{
  if(k<0 || t<0){
    return {0};
  }

  if(k==0 && t==0){
    return {};
  }
  
  for(;i<x.size();i++){
    vector<int> res;
    res.push_back(x[i]);
    stupidKsum(x, i, res, k-1, t-x[i]);
    if(res.size() == k)
      return res;
  }
  
  return {};
}

int main()
{
  return 0;
}
