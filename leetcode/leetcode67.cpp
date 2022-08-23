#include<bits/stdc++.h>
using namespace std;

void printV(vector<int> v){
  for(int i:v){
    cout<<i<<' ';
  }
  cout<<'\n';
}

string addBinary(string a, string b){
  int p=a.size()-1, q=b.size()-1;
  string ans="";
  int c=0;
  while(p>=0 || q>= 0){
    if(p>=0)
      c+=a[p]-'0';
    if(q>=0)
      c+=b[q]-'0';
    ans+=c%2 + '0';
    c=c/2;
    p--;
    q--;
  }
  if(c)
    ans+='1';
  reverse(ans.begin(),ans.end());
  return ans;
}

int main(){
  string a = "0";
  string b = "0";
  cout<< addBinary(a, b);
  return 0;
}
