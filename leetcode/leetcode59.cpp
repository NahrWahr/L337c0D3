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

vector<vector<int>> generateMatrix(int n)
{
  vector<vector<int>> res(n, vector<int> (n));
  int r=0,c=0,rv=0,cv=1;
  for(int i=1;i<=n*n;i++){
    if(c==n-1 || res[r][c+1]!=0){
      cv = 0;
      rv = 1;
    }
    if(c==0 || res[r][c-1]!=0){
      cv = 0;
      rv = -1;
    }
    if(r==n-1 || res[r+1][c]!=0){
      cv = -1;
      rv = 0;
    }
    if(r==0 || res[r-1][c]!=0){
      cv = 1;
      rv = 0;
    }
    if(res[r][c] == 0){
      res[r][c] = i;
    }
    r += rv;
    c += cv;
  }
  return res;
}

// vector<vector<int>> generateMatrix(int n)
// {
//   vector<vector<int>> ret(n, vector<int> (n));
//   int k = 1, i = 0;
//   while(k<=n*n){
//     int j = i;
//     while(j<n-i)
//       ret[i][j++] = k++;
//     j = i+1;
//     while(j<n-i)
//       ret[j++][n-i-1] = k++;
//     j = n-i-2;
//     while(j>i)
//       ret[n-i-1][j--] = k++;
//     j = n-i-1;
//     while(j>i)
//       ret[j--][i] = k++;
//     i++;
//   }
//   return ret;
// }

int main()
{
  printM(generateMatrix(4));
  return 0;
}
