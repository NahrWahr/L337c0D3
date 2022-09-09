#include<bits/stdc++.h>
using namespace std;

int divide(int p, int q)
{
  int sign= ((p>0) == (q>0)) ? 1 : -1;
  p=abs(p);
  q=abs(q);
  int res=0;
  while(p-q>=0){
    res++;
    p=p-q;
  }
  return sign*res;
}

int main()
{
  uint32_t p=43, q=-11;
  cout<<divide(p, q);
  return 0;
}
