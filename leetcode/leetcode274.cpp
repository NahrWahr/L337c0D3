#include<bits/stdc++.h>
using namespace std;

int hIndex(vector<int> &v)
{
  int n=v.size();
  int s=0,e=n-1;
  sort(v.begin(), v.end());
  while(s<=e){
    int avg=(e+s)/2;
    v[avg]<n-avg ? s=avg+1 : e=avg-1;
  }
  return n-s;
}

int main()
{
  int n=10;
  vector<int> v(n);
  for(int i=0;i<n;i++){
    v[i]=rand()%20;
  }
  cout<<hIndex(v);
  return 0;
}
