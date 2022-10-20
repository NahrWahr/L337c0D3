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

int numDecodings(string s, int i=0)
{
  int l=s.length();
  if(l==0 || s[i]=='0')
    return 0;

  if(i==l)
    return 1;

  int w = numDecodings(s, i+1);
  
  if(i<l-1 && stoi(s.substr(i, 2)) < 27){
    string tmp = s.substr(i,2);
    if(tmp == "21")
      cout<<"FUCK";
    w += numDecodings(s, i+2);
  }
    
  return w;
}

int main()
{
  string s="2101";
  cout<<numDecodings(s);
  return 0;
}
