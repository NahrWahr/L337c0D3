#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
  string common;
  for(int i=0;;i++){
    
    char c=strs[0][i];
    
    if (c=='\0')
      return common;
    
    for(string s:strs)
      {
      if (c==s[i])
	continue;
      else
	return common;
      }
    
    common += c;
  }
}

int main()
{
  vector<string> in = {"flower", "flow", "flogging", "floor"};
  cout<<longestCommonPrefix(in);
  return 0;
}
