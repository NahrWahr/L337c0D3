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

void setZeroes(vector<vector<int>> &M)
{
  int m = M.size(), n = M[0].size();
  vector<bool> r = vector<bool> (m), c = vector<bool> (n);
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      if(M[i][j] == 0)
	r[i] = c[j] = true;
    }
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      if(r[i] || c[j])
	M[i][j] = 0;
    }
  }
}

int main()
{
  vector<vector<int>> m=
    {{0,1,1,1},
     {1,1,0,1},
     {1,1,1,1}};

  printM(m);
  setZeroes(m);
  printM(m);
  
  return 0;
}
