#include<bits/stdc++.h>
using namespace std;

int main()
{
  int x = 3;
  int y = 5;

  int *p, **q;
  p=&x,q=&p;
  cout<<&x<<' '<<&y<<' '<<'\n';
  cout<<p<<' '<<q<<' '<<&p<<' '<<**q<<'\n';
  return 0;
}
