#include<bits/stdc++.h>
using namespace std;
 
void rotate(vector<vector<int>> &m)
{
  reverse(m.begin(), m.end());
  for(int i=0;i<m.size();i++){
    for(int j=i+1;j<m[0].size();j++){
      swap(m[i][j], m[j][i]);
    }
  }
}

int main()
{
  int n=10;
  vector<vector<int>> m(n, vector<int> (n,0));
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      m[i][j]=rand()%10;
    }
  }
  rotate(m);
  return 0;
}
