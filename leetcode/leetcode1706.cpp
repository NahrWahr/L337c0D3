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

vector<int> findBall(vector<vector<int>>& g)
{
  int m=g.size(),n=g[0].size();
  vector<int> ans(n);
  for(int c=0;c<n;c++){
    int col = c;
    for(int r=0;r<m;r++){
      int ncol = col + g[r][col];
      if(ncol < 0 ||
	 ncol >= n ||
	 g[r][col] ^ g[r][ncol]){
	ans[c] = -1;
	break;
      }
      col = ncol;
      if(r==m-1)
	ans[c] = col;
    }
  }
  return ans;
}

int main()
{
  vector<vector<int>> g = {
    {1,1,1,-1,-1},
    {1,1,1,-1,-1},
    {-1,-1,-1,1,1},
    {1,1,1,1,-1},
    {-1,-1,-1,-1,-1}
  };
  for(int i:findBall(g)) cout<<i<<' ';
  return 0;
}
