#include<bits/stdc++.h>
using namespace std;

long long FibSeq(int n)
{
  if(n<=1)
    return 1;
  return FibSeq(n-1)+FibSeq(n-2);
}

long long FibIter(int n)
{
  long long pFib=0;
  long long cFib=1;
  long long nFib;
  for(int i=0;i<n;i++){
    nFib=pFib+cFib;
    pFib=cFib;
    cFib=nFib;
  }
  return nFib;
}

int main()
{
  int n=50;
  cout << FibIter(n);
  return 0;
}
