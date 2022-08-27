#include<bits/stdc++.h>
using namespace std;

int titleToNumber(string s)
{
  int ans=0;
  for(char c:s){
    ans*=26;
    ans+=(int) c-64;
  }
  return ans;
}

int main()
{
  string s="A";
  cout<<titleToNumber(s);
  return 0;
}
