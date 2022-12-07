#include<bits/stdc++.h>
using namespace std;

void printV(vector<int> v)
{
  for(auto i:v){
    cout<<i<<' ';
  }
  cout<<'\n';
}

void printM(vector<vector<int>> m)
{
  for(auto v:m){
    printV(v);
  }
}

stack<pair<int,int>> s;

int next(int p)
{
  int res = 1;
  while(!s.empty() && s.top().first <= p){
    res += s.top().second;
    s.pop();
  }

  s.push({p,res});
  return res;
}
  
int main()
{
  return 0;
}
