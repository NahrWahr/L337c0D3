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

string orderlyQueue(string s, int k)
{
  if(k>1){
    sort(s.begin(),s.end());
    return s;
  }
  else if(k==1){
    int n = s.size();
    string tmp = s+s;
    for(int i=0;i<n;i++){
      s = min(s, tmp.substr(i,n));
    }
    return s;
  }
  return "FUG";
}

int main()
{
  string s = "baaca";
  cout<<orderlyQueue(s, 3);
  return 0;
}
