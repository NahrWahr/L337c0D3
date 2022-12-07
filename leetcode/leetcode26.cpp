#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &x)
{
  int n = x.size(), k = 1;
  int mem = x[0];
  for(int i=1;i<n;i++){
    if(x[i] != mem){
      mem = x[i];
      x[k] = mem;
      k++;
    }
  }
  return k;
}

int main()
{
  vector<int> x={1,2,2,3,1,1,2,1,23,4,3,12,34};

  sort(x.begin(),x.end());
  for(int i:x){
    cout<<i<<' ';
  }
  cout<<'\n'<<removeDuplicates(x)<<'\n';
  for(int i:x){
    cout<<i<<' ';
  }
  return 0;
}

