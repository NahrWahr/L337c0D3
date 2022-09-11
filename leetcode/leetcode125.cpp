#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
  string clean;
  for(char c:s){
    if(!isalnum(c))
      continue;
    clean+=tolower(c);
  }

  int l=clean.size();
  
  for(int i=0;i<l/2;i++){
    if(clean[i]==clean[l-i-1])
      continue;
    else
      return false;
  }
    
  return true;
}

int main()
{
  string s="Ding, Dong, gnod. : gnid";
  cout<<isPalindrome(s);
  return 0;
}
