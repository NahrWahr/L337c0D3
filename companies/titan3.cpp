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

int m,n;

void dfs(vector<vector<int>> &a, int i, int j)
{
  if((i>=m || j>=n) ||
     (i<0 || j<0))
    return;

  if(a[i][j] == 1){
    a[i][j] = 0;
    dfs(a, i+1,j);
    dfs(a, i-1,j);
    dfs(a, i,j+1);
    dfs(a, i,j-1);
  }
}

int numBoats(vector<vector<int>> &a)
{
  m = a.size(), n = a[0].size();
  int count = 0;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      if(a[i][j] == 1){
	count++;
	dfs(a,i,j);
      }
    }
  }
  return count;
}

int main()
{
  vector<vector<int>> a = {
    {1,0,1,1},
    {0,0,0,0},
    {1,1,0,0},
    {1,1,0,1}
  };
  cout<<numBoats(a);
  return 0;
}
