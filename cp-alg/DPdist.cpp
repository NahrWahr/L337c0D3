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

string x, y;
vector<vector<int>> M;

int dp(int i, int j)
{
  if(i<0)
    return j+1;
  if(j<0)
    return i+1;

  if(M[i][j] != 0)
    return M[i][j];
  //char match
  if(x[i] == y[j]){
    M[i][j] = dp(i-1,j-1);
    return M[i][j];
  }

  else{
    M[i][j] = min(dp(i-1,j)+1,
		  min(dp(i,j-1)+1,
		      dp(i-1,j-1)+1));
    return M[i][j];
  }
}

int minDis(string a, string b)
{
  int p=a.length(),q=b.length();
  x = a;
  y = b;
  M.resize(p, vector<int> (q));
  
  return dp(p-1, q-1);
}

int main()
{
  string a="bladdy bastard bitch";
  string b="no ben chod u bladdy";
  string p="welfug", q="woolfur";
  cout<<minDis(a, b)<<'\n';
  return 0;
}
