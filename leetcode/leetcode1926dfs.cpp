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

vector<vector<char>> g;
vector<int> e;
vector<vector<bool>> vis;
int m,n;

int dfs(int i, int j)
{
  if(i<0 || i>=m ||
     j<0 || j>=n ||
     vis[i][j] ||
     g[i][j] == '+')
    return INT_MAX/2;

  vis[i][j] = true;

  if((i==0 || i==m || j==0 || j==n)
     &&
     (i != e[0] && j != e[1]))
    return 1;

  return min(min(dfs(i+1,j),
		 dfs(i,j+1)),
	     min(dfs(i-1,j),
		 dfs(i,j-1)))+1;
}

int nearestExit(vector<vector<char>>& maze, vector<int>& ent)
{
  m=maze.size(),n=maze[0].size();
  g = maze;
  vis.resize(m, vector<bool> (n));
  e = ent;
  return dfs(ent[0],ent[1]);
}


int main()
{
  vector<vector<char>> maze = {{'+','+','.','+'},
			       {'.','.','.','+'},
			       {'+','+','+','.'}};
  vector<int> entrance = {1,2};
  cout<<nearestExit(maze, entrance);
  return 0;
}
