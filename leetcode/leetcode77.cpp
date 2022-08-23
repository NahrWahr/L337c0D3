#include<bits/stdc++.h>
using namespace std;

void Comb(int n, int k, vector<int> v, vector<vector<int>> &res)
{
  if(k<=0){
    res.push_back(v);
    return;
  }
  
  for(int i=k;i<=n;i++){
    v.push_back(i);
    Comb(i-1,k-1,v,res);
    v.pop_back();
  }
}

vector<vector<int>> combine(int n, int k)
{
  vector<vector<int>> res;
  vector<int> v;
  Comb(n, k, v, res);
  return res;
}

int main()
{
  int n=4, k=2;
  vector<vector<int>> res = combine(n,k);
  for(vector<int> v:res){
    for(int i:v){
      cout<<i<<' ';
    }
    cout<<'\n';
  }
  return 0;
}
