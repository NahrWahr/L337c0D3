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

int minMutation(string s, string e, vector<string> &b)
{
  map<string,int> dist;
  dist[s] = 0;
  queue<string> q;
  q.push(s);
  while(!q.empty()){
    auto u = q.front(); q.pop();
    
    for(auto v:b){
      if(dist.count(v)) continue;
      int c = 0;
      
      for(int i=0;i<8;i++)
	if(u[i] != v[i]) c++;

      if(c==1){
	dist[v] = dist[u]+1;
	q.push(v);
      }
    }
  }
  if(dist.count(e))
    return dist[e];
  else
    return -1;
}

int main()
{
  return 0;
}
