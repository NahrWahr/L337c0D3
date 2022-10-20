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

vector<string> restoreIpAddresses(string s)
{
  vector<string> ret;
  string ans;
  int n = s.length();

  for(int a=1;a<=3;a++){
    for(int b=1;b<=3;b++){
      for(int c=1;c<=3;c++){
	for(int d=1;d<=3;d++){
	  if(a+b+c+d == n){
	    int A = stoi(s.substr(0, a));
	    int B = stoi(s.substr(a, b));
	    int C = stoi(s.substr(a+b, c));
	    int D = stoi(s.substr(a+b+c, d));
	    if (A<=255 && B<=255 && C<=255 && D<=255)
	      if ( (ans=to_string(A)+"."+to_string(B)+"."+to_string(C)+"."+to_string(D)).length() == s.length()+3)
		ret.push_back(ans);
	  }
	}
      }
    }
  }
  return ret;
}

int main()
{
  string s = "25525511135";
  for(string str:restoreIpAddresses(s)){
    cout<<str<<'\n';
  }
  return 0;
}
