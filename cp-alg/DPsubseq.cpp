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
  if(i<0 || j<0)
    return 0;

  if(M[i][j] != 0)
    return M[i][j];
  
  if(x[i] == y[j]){
    M[i][j] = dp(i-1, j-1) + 1;
    return M[i][j];
  }
  else{
    M[i][j] = max(dp(i-1, j),
		  dp(i, j-1));
    return M[i][j];
  }
}

int subseq(string a, string b)
{
  x = a, y = b;
  int p = x.length();
  int q = y.length();

  M.resize(p, vector<int> (q, 0));

  return dp(p-1, q-1);
}

int lps(string x)
{
  int p = x.length();

  M.resize(p, vector<int> (p, 0));

  for(int i=0;i<p;i++){
    M[i][i] = 1;
  }

  for(int i=p-1;i>=0;i--){
    for(int j=i+1;j<p;j++){
      if(x[i] == x[j])
	M[i][j] = M[i+1][j-1] + 2;
      else{
	M[i][j] = max(M[i][j-1],
		      M[i+1][j]);
      }
    }
  }
  printM(M);
  return M[0][p-1];
}

int main()
{
  string a="bladdy bastard bitch";
  string b="no ben chod u bladdy";
  string p="welfug", q="woolfur";
  string t="racecar";
  cout<<lps(t)<<'\n';
  return 0;
}
