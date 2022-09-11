#include <bits/stdc++.h>
using namespace std;

string longestPalindrome(string s)
{
  // int m=1;  ### SHITE CODE ###
  // int n=s.length();
  // int gm=0, lm=0;
  // string res;
  // while(m<n){
  //   int i=m,j=m;
  //   string tmp="";
  //   tmp+=s[m];
    
  //   while(s[--i]==s[++j]){
  //     lm=j-i+1;
  //     tmp=s[i]+tmp+s[j];
  //     if(lm>gm){
  // 	gm=lm;
  // 	res=tmp;
  //     }
  //   }
  //   m++;
  // }
  // return res;
}
  
int main(){
  string s="abcdcbea";
  cout<<longestPalindrome(s);
  return 0;
}
