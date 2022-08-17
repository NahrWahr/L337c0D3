#include<bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix)
{
  int m=matrix.size();
  int n=matrix[0].size();
  vector<int> vout;
  vout.push_back(matrix[0][0]);
  
  int dirx = 1;
  int diry = 1;

  int i=0,j=0;
  for(;i<10;i++){
    cout<<i<<j<<'\n';
    if (i==m){
      dirx*=-1;
      m--;
    }
    if (j==n){
      diry*=-1;
      m--;
    }
    if (i==0){
      dirx*=-1;
      m--;
    }
  }
  return vout;
}

int main()
{
  vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
  spiralOrder(matrix);
  return 0;
}
