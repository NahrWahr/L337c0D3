#include<bits/stdc++.h>
using namespace std;

string reverseWords(string s)
{
  int n = s.size();
  int i=0,j=0;
  
  while(i<n){
    j = i;
    while(j<n){
      if (s[j] == ' ')
	break;
      j++;
    }
    reverse(s.begin()+i, s.end()+j);
    i=j+1;
  }
  cout << s;
  return s;
}

int main(){
  string s = "Ding Dong";
  reverseWords(s);
  return 0;
}
