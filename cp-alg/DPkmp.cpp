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

int searchstupid(string s, string p)
{
  int m=p.length();
  int n=s.length();

  for(int i=0;i<=n-m;i++){
    int j;
    for(j=0;j<m;j++){
      if(p[j] != s[i+j])
	break;
    }
    if(j==m)
      return i;
  }
  return -1;
}

vector<vector<int>> M;

void KMP(string p)
{
  int n = p.length();
  M.resize(n, vector<int> (256));

  M[0][p[0]] = 1;
  int X = 0;
  
  for(int i=0;i<n;i++){
    for(int c=0;c<256;c++){
      if(p[i] == c)
	M[i][c] = i+1;
      else
	M[i][c] = M[X][c];
    }
    X = M[X][p[i]];
  }
}

int search(string t, string p)
{
  int m = t.length();
  int n = p.length();

  KMP(p);
  
  int j=0;
  for(int i=0;i<m;i++){
    j = M[j][t[i]];

    if(j == n)
      return i-n+1;
  }
  return 0;
}

int main()
{
  string a="bladdy bastard bitch";
  string b="no ben chod u bladdy";
  string p="welfug", q="woolfur";

  cout<<searchstupid(a, "tard")<<'\n';
  cout<<search(a, "tard");
  return 0;
}
