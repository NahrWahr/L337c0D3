#include <bits/stdc++.h>
using namespace std;

string convert(string s, int numRows)
{
  int n = s.size();
  int k = 1;
  vector<string> Out(numRows);
  for (int i=0; i<n; i++){
    Out[i%3] += s[i];
  }
  string res;
  for (string s : Out){
    res += s;
  }
  return res;
}

int main(){
  string s = "PAYPALISHIRING";
  cout << convert(s, 3);
  return 0;
}
