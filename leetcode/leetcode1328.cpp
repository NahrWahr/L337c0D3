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

vector<vector<int>> m;

string palindrome(string &s, int l, int r)
{
  int n = s.length();
  while(l>=0 && r<n && s[l] == s[r]){
    l--;
    r++;
  }
  return s.substr(l+1, r-l-1);
}

string breakPalindrome(string s)
{
  string res;
  int n = s.length();
  m.resize(n, vector<int> (n));
  for(int i=0;i<n;i++){
    m[i][i] = 1;
  }

  
  return res;
}

int main()
{
  string s = "racecar";
  cout<<breakPalindrome(s);
  return 0;
}
