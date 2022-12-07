#include<bits/stdc++.h>
using namespace std;

void printV(vector<int> v)
{
  for(auto i:v){
    cout<<i<<' ';
  }
  cout<<'\n';
}

void printM(vector<vector<int>> m)
{
  for(auto v:m){
    printV(v);
  }
}

int sol(string s)
{
  map<char,int> mem;
  for(char c:s){
    mem[c]++;
  }

  int n = s.size();
  for(int i = 0;i<n;i++){
    if(mem[s[i]] == 1)
      return i+1;
  }
  return -1;
}

int main()
{
  string s = "hackthegame";
  cout<<sol(s);
  return 0;
}
