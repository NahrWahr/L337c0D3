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

bool operator !(string s)
{
  int n = s.length();
  return !n;
}

bool match(string t, string p)
{
  if(!p)
    return !t;

  bool f = !(!t) && (p[0] == t[0] || p[0] == '.');

  if(p.length()>=2 && p[1] == '*')
    return (f && match(t.substr(1), p)) || match(t.substr(1), p.substr(2));
  else
    return f && match(t.substr(1), p.substr(1));
}

int main()
{
  string t = "dddd";
  string p = "..d.";
  cout<<match(t,p);
  return 0;
}
