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

int nearestExit(vector<vector<char>>& maze, vector<int>& ent)
{
  m=maze.size(),n=maze[0].size();
  
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
