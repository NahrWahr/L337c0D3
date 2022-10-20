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

void topoSortUtil(int v, vector<bool> visited, stack<int> &Stack)
{
  visited[v] = true;

  
}

void topoSort(vector<vector<int>> in)
{
  int n = in.size();
  stack<int> Stack;
  vector<bool> visited(n,0);

  for(int i=0;i<n;i++)
    if(visited[i] == false)
      topoSortUtil(i, visited, Stack);

  for(int i=0;i<n;i++){
    cout<<Stack.top()<<' ';
    Stack.pop();
  }
}

int main()
{
  return 0;
}
