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

// int removeStones(vector<vector<int>> & s)
// {
//   int m=0,n=0;
//   for(auto v:s){
//     m = max(m, v[0]);
//     n = max(n, v[1]);
//   }
  
//   vector<vector<int>> g(m+2, vector<int> (n+2));
//   for(auto v:s){
//     g[v[0]][v[1]] = max(g[v[0]][n+1],g[m+1][v[1]])+1;
//     g[v[0]][n+1]++;
//     g[m+1][v[1]]++;
//   }
//   printM(g);

//   int remove=0;
//   for(auto v:s){
//     if(g[v[0]][v[1]] > 1)
//       remove++;
//   }
//   return remove; 
// }

void dfs(vector<vector<int>> &s, int ind, vector<bool> &v)
{
  int n = s.size();
  v[ind] = true;

  for(int i=0;i<n;i++)
    if(!v[i] && (s[i][0] == s[ind][0] ||
		 s[i][1] == s[ind][1]))
      dfs(s, i, v);
}

int removeStones(vector<vector<int>> &s)
{
  int n = s.size();
  vector<bool> v(n);
  int res=0;
  for(int i=0;i<n;i++){
    if(v[i])
     continue;
    dfs(s, i, v);
    res++;
  }
  
  return n-res;
}

int main()
{
  vector<vector<int>> grid = {{1,0},{0,1},{1,1}};
  cout<<removeStones(grid);
  return 0;
}
