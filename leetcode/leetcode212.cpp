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

int m,n,maxlen=0;
vector<vector<char>> b;
unordered_set<string> w;
vector<vector<bool>> visited;
vector<string> res;

void DFS(int i, int j, string s){
  if(i<0 || j<0 || i>=m || j>=n || visited[i][j] || (int)s.length()>maxlen)
    return;
  if(w.count(s))
    res.push_back(s);
  cout<<s<<' ';

  visited[i][j] = true;
  s += b[i][j];
  DFS(i+1,j,s);
  DFS(i,j+1,s);
  DFS(i-1,j,s);
  DFS(i,j-1,s);
  return;
}

vector<string> findWords(vector<vector<char>>& board, vector<string>& words)
{
  m = board.size();
  n = board[0].size();
  visited.resize(m, vector<bool> (n));
  b = board;
  for(auto s:words){
    w.insert(s);
    maxlen = max(maxlen, (int)s.size());
  }
  
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      visited.resize(m, vector<bool> (n));
      DFS(i,j, "");
    }
  }

  return res;
}

int main()
{
  vector<vector<char>> board = {{'o','a','a','n'},{'e','t','a','e'},{'i','h','k','r'},{'i','f','l','v'}};
  vector<string> words = {"oath","pea","eat","rain"};
  for(auto s:findWords(board, words))
    cout<<s<<' ';
  return 0;
}
