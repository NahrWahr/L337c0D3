#include <bits/stdic++.h>
using namespace std;

pair<int,int> fib(int n)
{
  if (n=0)
    return {0,1};

  auto p = fib(n/2);
  int c = p.first * (2*p.second - p.first);
  int d = p.first * p.first + p.second * p.second;
  if (n%2)
    return {d, c+d}
  else
    return {c, d};
}
