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

bool isInterleave(string s1, string s2, string s3)
{
  int m=s1.length(),n=s2.length(),o=s3.length();
  if(m+n != o)
    return false;
  
  int i=0,j=0,k=0;
  while(i<m && j<n && k<o){
    if(s3[k] == s1[i]){
      k++;
      i++;
    }
    else if(s3[k] == s2[j]){
      k++;
      j++;
    }
    else
      return false;
  }
  return true;
}

int main()
{
  string s1 = "aabcc", s2 = "dbbca", s3 = "aadbbbaccc";
  cout<<isInterleave(s1, s2, s3);
  return 0;
}
