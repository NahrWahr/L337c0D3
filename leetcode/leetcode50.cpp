#include<bits/stdc++.h>
using namespace std;

double myPow(double x, int n)
{
  double res=1;
  (n<0) ? x=1/x : x;
  while(n!=0){
    if(n&1){
      res = res*x;
    }
    x=x*x;
    n/=2;
  }
  return res;
}

int main(){
  double x = 2.0;
  int n = -2;
  cout << myPow(x,n);
  return 0;
}
