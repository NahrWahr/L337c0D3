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

bool exist(vector<vector<char>> &b, string w)
{
  int m=b.size(), n=b[0].size();
  vector<vector<int>> dp(n, vector<int> (n));

  unordered_set<char> s;
  for(char c:w){
    s.insert(c);
  }
  
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(s.find(b[i][j]) != s.end())
	dp[i][j] = 1;
    }
  }
}

int main()
{
  return 0;
}
