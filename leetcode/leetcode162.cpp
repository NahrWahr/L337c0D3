#include<bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int> &x)
{
  int l=0, h=x.size()-1;
  int n=x[0];

  while(l<=h){
    int m=(l+h)/2;
    if(x[m]>x[m-1] && x[m] > x[m+1])
      return x[m];
    if(x[m]<x[m+1]){
      l=m;
    }
    if(x[m]<x[m-1]){
      h=m;
    }
  }
  
  return n;
}

int main()
{
  return 0;
}
