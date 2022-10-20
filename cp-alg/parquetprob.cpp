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

int n=3, m=3;
vector<vector<int>> dp(n+1, vector<int> (1<<m));

void calc(int x=0, int y=0, int mask=0, int Nmask=0)
{
  if(x==n)
    return;
  if(y>=m)
    dp[x+1][Nmask] += dp[x][mask];
  else{
    int Mmask = 1<<y;
    if(mask & Mmask)
      calc(x,y+1,mask,Nmask);
    else{
      calc(x,y+1,mask, Nmask | Mmask);
      if(y+1<m && !(mask & Mmask) && !(mask &(Mmask<<1)))
	calc(x, y+2, mask, Nmask);
    }
  }
}

int main()
{
  dp[0][0]=1;

  for(int x=0;x<n;x++){
    for(int mask=0;mask<(1<<m);mask++){
      calc(x, 0, mask, 0);
    }
  }
  printM(dp);
  
  return 0;
}
