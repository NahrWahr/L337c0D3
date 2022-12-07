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

vector<vector<char>> b;
string w;
int m,n,l;

bool dfs(int i, int j, vector<vector<bool>> vis, string cur = "")
{
  if(i<0 || i>=m || j<0 || j>=n ||
     vis[i][j] ||
     cur.size() > w.size() ||
     cur != w.substr(0, cur.size()))
    return false;
  
  cur+=b[i][j];
  vis[i][j] = true;
  if(cur == w)
    return true;

    
  return
    dfs(i+1,j,vis,cur) ||
    dfs(i,j+1,vis,cur) ||
    dfs(i-1,j,vis,cur) ||
    dfs(i,j-1,vis,cur);
}

bool exist(vector<vector<char>> &board, string word)
{
  b = board;
  w = word;
  m=b.size(), n=b[0].size(), l=w.size();
  
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      vector<vector<bool>> vis(m, vector<bool>(n,0));
      if(dfs(i,j,vis))
	return true;
    }
  }
  return false;
}

int main()
{
  vector<vector<char>> board =   {
    {'a','a','b','a','a','b'},
    {'a','a','b','b','b','a'},
    {'a','a','a','a','b','a'},
    {'b','a','b','b','a','b'},
    {'a','b','b','a','b','a'},
    {'b','a','a','a','a','b'}
  };

  string word = "bbbaabbbbbab";
  cout<<exist(board, word);
  return 0;
}
