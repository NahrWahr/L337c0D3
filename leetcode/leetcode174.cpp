#include <bits/stdc++.h>
using namespace std;

int helper(vector<vector<int>> &d, int m, int n, int hp)
{
  hp=d[m][n];
  if(m==0 && n==0) return hp;

  int c1,c2;
  
  if(m>0) c1 = helper(d, m-1, n, hp);
  if(n>0) c2 = helper(d, m, n-1, hp);
  return hp+=min(c1, c2);
}

int calculateMinimumHP(vector<vector<int>> &d){
  int m=d.size()-1, n=d[0].size()-1;
  int hp=0;
  helper(d, m-1, n, hp);
  helper(d, m, n-1, hp);
  return hp;
}

int main()
{
  int n=57;
  return 0;
}
