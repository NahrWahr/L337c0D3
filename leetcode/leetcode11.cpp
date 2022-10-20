#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int> &x)
{
  int i=0,j=x.size()-1;
  int mArea=0;
  while(i<j){
    mArea=max(mArea,min(x[i],x[j])*(j-i));
    if(x[i]<x[j])
      i++;
    else if(x[i]==x[j]){
      i++;
      j--;
    }
    else
      j--;
  }
  return mArea;
}

int main()
{
  vector<int> x={30,23,29};
  cout<<maxArea(x);
  return 0;
}
