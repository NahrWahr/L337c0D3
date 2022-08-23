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

void setZeroes(vector<vector<int>> &m)
{
  int p=m.size(), q=m[0].size();
  for(int i=0;i<p;i++){
    for(int j=0;j<q;j++){
      if(m[i][j]==0){
	m[i][0]=0;
	m[0][j]=0;
      }
    }
  }
  printM(m);

  for(int i=1;i<p;i++){
    for(int j=1;j<q;j++){
      if(m[i][0]==0 || m[0][j]==0){
	m[i][j]=0;
      }
    }
  }
  printM(m);

}

int main()
{
  vector<vector<int>> m=
    {{1,1,1,1},
     {1,0,1,1},
     {0,1,1,1}};
  setZeroes(m);
  
  return 0;
}
