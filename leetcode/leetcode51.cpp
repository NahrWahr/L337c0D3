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

bool safe(vector<vector<int>> &b, int p, int q)
{
  int n=b.size();
  
  for(int i=0;i<n;i++){
    if(b[p][i] && i!=q)
      return false;
  }
  
  for(int i=0;i<n;i++){
    if(b[i][q] && i!=p)
      return false;
  }

  for(int i=0;i<n;i++){
    if(b[(p+i)%n][(q+i)%n])
      return false;
    if(b[(p-i)%n][(q+i)%n])
      return false;
  }
  
  return true;
}

vector<vector<vector<int>>> ret;

void helper(vector<vector<int>> b, int r=0)
{
  int n = b.size();
  if(r==n)
    ret.push_back(b);
  
  for(int i=0;i<n;i++){
    b[r][i] = 1;
    if(safe(b,r,i)){
      cout<<r<<i;
      helper(b,r+1);
    }
    b[r][i] = 0;
  }
}

vector<vector<int>> solveNQueens(int n)
{
  vector<vector<int>> b(n, vector<int> (n));
  helper(b, 0);
  return b;
}

int main()
{
  solveNQueens(1);
  return 0;
}
