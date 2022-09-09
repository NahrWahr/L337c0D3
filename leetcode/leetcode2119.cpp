#include<bits/stdc++.h>
using namespace std;

bool isSameAfterReversals(int x)
{
  if(x==0)
    return true;
  if(x%10==0)
    return false;
  return true;
}

int main()
{
  uint32_t x=43261596;
  cout<<reverseBits(x);
  return 0;
}
