#include<bits/stdc++.h>
using namespace std;

uint32_t reverseBits(uint32_t x)
{
  uint32_t res=0;
  for(int i = 0; i<32; i++){
    res=res*2 + x%2;
    x/=2;
  }
  return res;
}

int main()
{
  uint32_t x=43261596;
  cout<<reverseBits(x);
  return 0;
}
