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

vector<string> split(string s)
{
  vector<string> res={""};
  for(char c:s){
    if(c == ' ')
      res.push_back("");
    else
      res.back()+=c;
  }
  return res;
}

string reverseWords(string s) {
  vector<string> tmp = split(s);
  reverse(tmp.begin(), tmp.end());
  string res;
  for(string t:tmp){
    res += t;
    res += ' ';
  }
  return res;
}

int main()
{
  string s = "the sky is blue";
  cout<<reverseWords(s);
  return 0;
}
