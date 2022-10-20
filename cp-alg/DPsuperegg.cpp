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

int res=INT_MAX;
int n;
vector<vector<int>> M;

int dp(int e, int f)
{
  if (e<=1)
    return f;
  if (f<=0)
    return 0;

  if(M[e][f] != n)
    return M[e][f];
  
  for(int i=1;i<=f;i++){
    M[e][f] = min(M[e][f],
	      max(dp(e-1,i-1), //broken
		  dp(e,f-i)) + 1); //not-broken
  }
  return M[e][f];
}

int main()
{
  int e=4, f=100;
  n=f;
  M.resize(e+1, vector<int> (f+1, n));
  cout<<dp(e, f);
  return 0;
}
