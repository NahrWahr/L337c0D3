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

bool mysort(vector<int> a, vector<int> b)
{
  return a[1] < b[1];
}

bool canFinishnope(int n, vector<vector<int>>& p)
{
  sort(p.begin(),p.end(),mysort);
  printM(p);
  for(int i=1;i<n;i++){
    if(p[i][0] < p[i-1][0])
      return false;
  }
  return true;
}

bool canFinish(int n, vector<vector<int>>& p)
{
  vector<vector<int>> adj(n, vector<int>());
  vector<int> degree(n);
  for(auto &e:p){
    adj[e[1]].push_back(e[0]);
    degree[e[0]]++;
  }
  
  queue<int> q;
  for(int i=0;i<n;i++)
    if(degree[i]==0)
      q.push(i);

  while(!q.empty()){
    int curr=q.front();
    q.pop();
    n--;

    for(auto n:adj[curr]){
      degree[n]--;
      if(degree[n] == 0)
	q.push(n);
    }
  }
  return n==0;
}

int main()
{
  vector<vector<int>> p = {{1,0},{0,1}};
  cout<<canFinish(2, p);
  return 0;
}
