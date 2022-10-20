#include<bits/stdc++.h>
using namespace std;

void printV(vector<pair<int,int>> v){
  for(pair<int,int> i:v){
    cout<<i.first<<","<<i.second<<' ';
  }
  cout<<'\n';
}

void printM(vector<vector<pair<int,int>>> m){
  for(vector<pair<int,int>> v:m){
    printV(v);
  }
}

vector<vector<pair<int,int>>> M;

pair<int,int> stones(vector<int> p)
{
  int n = p.size();
  M.resize(n, vector<pair<int,int>> (n));
  for(int i=0;i<n;i++){
    M[i][i].first = p[i];
    M[i][i].second = 0;
  }

  for(int l=2;l<=n;l++){
    for(int i=0;i<=n-l;i++){
      int j = l+i-1;

      int l = p[i] + M[i+1][j].second;
      int r = p[j] + M[i][j-1].second;
      if(l>r){
	M[i][j].first = l;
	M[i][j].second = M[i+1][j].first;
      }
      else{
	M[i][j].first = r;
	M[i][j].second = M[i][j-1].first;
      }
      
    }
  }
  printM(M);
  return M[0][n-1];
}

int main()
{
  vector<int> p = {1,7,13,3,17};
  stones(p);
  return 0;
}
