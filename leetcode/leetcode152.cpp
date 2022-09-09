#include<bits/stdc++.h>
using namespace std;

int maxProduct(vector<int> &x)
{
  int n=x.size();
  int gm=x[0];
  int l=0,r=0;
  for(int i=0;i<n;i++){
    l = (l==0?1:l)*x[i];
    r = (r==0?1:r)*x[n-i-1];
    gm = max(gm, max(l,r));
  }
  return gm;
}

int main()
{
  int n=10;
  vector<int> x(n);
  for(int i=0;i<n;i++){
    x[i]=rand()%10-5;
    cout<<x[i]<<' ';
  }
  cout<<'\n'<<maxProduct(x);
  return 0;
}
