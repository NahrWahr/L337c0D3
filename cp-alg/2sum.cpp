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

vector<vector<int>> twosum(vector<int> x, int t)
{
  int n = x.size();

  unordered_map<int,int> mem;
  for(int i=0;i<n;i++){
    mem[x[i]] = i;
  }
  
  vector<vector<int>> res;
  for(int i=0;i<=n/2;i++){
    int tmp = t - x[i];
    if(mem.find(tmp) != mem.end() && mem[tmp] != i){
      res.push_back({x[i],x[mem[tmp]]});
    }
  }
  
  return res;
}

int main()
{
  vector<int> x={1,10,5,2};
  printM(twosum(x, 7));
  return 0;
}
