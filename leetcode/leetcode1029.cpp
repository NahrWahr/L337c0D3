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

int twoCitySchedCost(vector<vector<int>> &x)
{
  int cost=0;
  int n = x.size();
  vector<int> saving(n);
  for(int i=0;i<n;i++){
    saving[i] = x[i][1] - x[i][0];
  }
  return cost;
}

int main()
{
  return 0;
}
