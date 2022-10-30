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

vector<vector<string>> partition(string s)
{
  vector<vector<string>> res;
  
  int n = s.length();
  vector<vector<int>> dp(n, vector<int> (n));
  vector<string> tmp;
  for(int i=0;i<n;i++){
    if(i>0 && s[i] == s[i-1]) dp[i-1][i] = 1;
    dp[i][i] = 1;
    string str;
    str += s[i];
    tmp.push_back(str);
  }
  res.push_back(tmp);

  for(int i=n-1;i>=0;i--){
    for(int j=n-1;j>i;j--){
      if(s[i] == s[j] && dp[i+1][j-1])
	dp[i][j] = 1;
    }
  }
  printM(dp);
  return {{}};
}

int main()
{
  string s = "racecarbippib";
  partition(s);
  return 0;
}
