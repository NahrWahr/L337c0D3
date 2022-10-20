#include <bits/stdc++.h>
using namespace std;

void printV(vector<bool> v){
  for(bool i:v){
    cout<<i<<' ';
  }
  cout<<'\n';
}

void printM(vector<vector<bool>> m){
  for(vector<bool> v:m){
    printV(v);
  }
}

string longestPalindrome(string s)
{
  if(s.length()==0)
    return "";
  int n=s.length();
  vector<vector<bool>> p(n,vector<bool> (n,0));
  
  for(int i=0;i<n;i++){
    p[i][i]=true;
  }
  
  for(int i=0;i<n-1;i++){
    p[i][i+1]= (s[i] == s[i+1]);
  }
  
  for(int i=n-3;i>=0;i--){
    for(int j=i+2;j<n;j++){
      p[i][j] = (p[i+1][j-1] && s[i]==s[j]);
    }
  }

  printM(p);
  string res=s.substr(0,1);
  int max=1;
  
  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      if((j-i+1 > max) && p[i][j]){
        max=j-i+1;
        res = s.substr(i, j-i+1);
      }
    }
  }
  
  return res;
}


int main(){
  string s="geeeks";
  cout<<longestPalindrome(s);
  return 0;
}
