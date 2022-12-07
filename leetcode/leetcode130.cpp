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

int m,n;
vector<vector<bool>> visited;
void dfs(vector<vector<bool>> &open, vector<vector<char>> &b, int i, int j)
{
  if(i<0 || j<0 || i>=m || j>=n)
    return;
  if(b[i][j] == 'X' || visited[i][j])
    return;

  visited[i][j] = true;
  open[i][j] = true;
  dfs(open, b, i+1,j);
  dfs(open, b, i-1,j);
  dfs(open, b, i,j+1);
  dfs(open, b, i,j-1);
}

void solve(vector<vector<char>> &b)
{
  m=b.size();
  n=b[0].size();
  vector<vector<bool>> open(m, vector<bool> (n));
  visited.resize(m, vector<bool> (n));
  for(int i=0;i<m;i++){
    if(b[i][0] == 'O'){
      dfs(open, b, i, 0);
    }
    if(b[i][n-1] == 'O'){
      dfs(open, b, i, n-1);
    }
  }
  for(int i=0;i<n;i++){
    if(b[0][i] == 'O'){
      dfs(open, b, 0, i);
    }
    if(b[m-1][i] == 'O'){
      dfs(open, b, m-1, i);
    }
  }

  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      if(!open[i][j])
	b[i][j] = 'X';
    }
  }
}

int main()
{

  vector<vector<char>> b = {{'O','O'},{'O','O'}};
  solve(b);
  for(auto v:b){
    for(auto e:v){
      cout<<e<<' ';
    }
    cout<<'\n';
  }
  return 0;
}
