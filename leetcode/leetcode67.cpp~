#include<bits/stdc++.h>
using namespace std;

void reverse(string &s){
  int n=s.size();
  string rs;
  for(int i=n-1;i>=0;i--){
    rs+=s[i];
  }
  s=rs;
}

string addBinary(string a, string b){ // BEAUTIFUL
  int m=a.size();
  int n=b.size();
  int k=m>n?n:m;
  int carry=0;
  string ans;
  reverse(a);
  reverse(b);
  for(int i=0;i<k;i++){
    int n=a[i]+b[i]+carry;
    carry=n%2;
    ans+=(n+carry)%2+'0';
  }
  string tmp=m>n?a:b;
  int t=tmp.size();
  for(int i=k;i<t;i++){
    int n=tmp[i]+carry;
    carry=n%2;
    ans+=(n+carry)%2+'0';
  }
  if(carry==1)
    ans+=1+'0';
  reverse(ans);
  return ans;
}

int main(){
  string a = "11";
  string b = "1";
  cout<< addBinary(a, b);
  return 0;
}
