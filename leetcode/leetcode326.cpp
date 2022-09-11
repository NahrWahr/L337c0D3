#include<bits/stdc++.h>
using namespace std;

bool isPowerOfThree(int n)
{
  while(n>1){
    if(n%3)
      return false;
    n/=3;
  }
  return n==1;
}

int main()
{
  int n=27;
  cout<<isPowerOfThree(n);
  return 0;
}
