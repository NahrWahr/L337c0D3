#include<bits/stdc++.h>
using namespace std;

int firstUniqChar(string s)
{
  int l=s.length();
  
  unordered_map<char, int> mem;
  for(char c:s){
    mem[c]++;
  }

  for(int i=0;i<l;i++){
    if(mem[s[i]]==1)
      return i;
  }
  
  return -1;
}

int main()
{
  string s = "shiggy diggy";
  cout<<firstUniqChar(s);
  return 0;
}
