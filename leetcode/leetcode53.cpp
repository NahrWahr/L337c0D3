#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &x)
{
  int n=x.size();
  int gm=INT_MIN, lm=0;

  for(int i=0; i<n; i++){
    lm = max(x[i], lm + x[i]);
    gm = max(gm, lm);
    cout<<lm<<' '<<gm<<'\n';
  }
  
  return gm;
}

int main()
{
  int n=5;
  vector<int> x(n);// = {1,2,3,23,4,2,21,2,4,3,21,34};
  for(int i=0;i<n;i++){
    x[i] = rand()%20 - 10;
    cout<<x[i]<<' ';
  }
  x = {-5,-4, 7, -6, 50};
  
  cout<<'\n'<<maxSubArray(x);
  return 0;
}
