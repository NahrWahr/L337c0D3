#include<bits/stdc++.h>
using namespace std;

int climbStairs(int n)
{
  int d1=1, d2=2;
  if(n==1)
    return d1;
  if(n==2)
    return d2;
  
  int d3=0;
  int tmp=0;
  for(int i=2;i<n;i++){
    d3=d1+d2;
    tmp=d2;
    d2=d3;
    d1=tmp;
  }
  return d3;
}

int main()
{
  int n=10;
  vector<int> x(n);// = {1,2,3,23,4,2,21,2,4,3,21,34};
  for(int i=0;i<n;i++){
    x[i] = rand()%100;
    //cout<<x[i]<<' ';
  }
  cout<<climbStairs(4);
  
  return 0;
}
