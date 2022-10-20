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

int uniquePaths(int r, int c)
{
  int res = 1;
  int N = r+c-2;
  int n = min(r,c) - 1;
  for(int i=N, j = 1; i>n ; i--, j++){
    res *= i;
    res /= j;
  }
  return res;
}

int main()
{
  int m=3,n=7;
  cout<<uniquePaths(m, n);
  return 0;
}
