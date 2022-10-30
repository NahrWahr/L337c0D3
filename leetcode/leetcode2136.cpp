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

int earliestFullBloom(vector<int>& ptime, vector<int>& gtime)
{
  vector<pair<int,int>> u;
  int n = ptime.size();
  for(int i=0;i<n;i++){
    u.push_back({gtime[i],ptime[i]});
  }
  sort(u.begin(), u.end());
  
  int res = 0;
  for(auto [g,p]:u){
    res = max(res,g) + p;
  }
  return res;
}

int main()
{
  return 0;
}
