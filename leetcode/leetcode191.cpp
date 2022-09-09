#include<bits/stdc++.h>
using namespace std;

int hammingWeight(uint32_t x)
{
  int n=0;
  while(x){
    n+=x%2;
    x/=2;
  }
  return n;
}

int main()
{
  uint32_t x=1024;
  cout<<hammingWeight(x);
  return 0;
}
