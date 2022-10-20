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

vector<vector<int>> b;
int n;

bool safe(int r, int c)
{
  for(int i=0;i<r;i++){
    if(b[i][c])
      return false;
  }

  int i=1;
  while(r - i >= 0 &&
	c - i >= 0){
    if(b[r-i][c-i])
      return false;
    i++;
  }

  i=1;
  while(r - i >= 0 &&
	c + i < n){
    if(b[r-i][c+i])
      return false;
    i++;
  }

  return true;
}

void helper(int r)
{
  if(r==n){
    printM(b);
    cout<<'\n';
    return;
  }
  
  for(int c=0;c<n;c++){
    if(safe(r, c)){
      b[r][c] = 1;
      helper(r+1);
      b[r][c] = 0;
    }
  }
}

void nqueens(int size)
{
  n = size;
  b.resize(n, vector<int> (n));
  helper(0);
}

int main()
{
  n = 4;
  nqueens(n);
  return 0;
}
