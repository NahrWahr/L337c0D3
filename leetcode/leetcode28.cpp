#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &x)
{
  int j=0, t=INT_MAX;
  for(int i:x){
    if(t==i){
      continue;
    }
    else{
      x[j]=i;
      j++;
      t=i;
    }
  }
  return j;
}

int main()
{
  vector<int> x={1,2,1,2,1,1,2,3,3,1,2,3,1};
  sort(x.begin(),x.end());
  for(int i:x){
    cout<<i<<' ';
  }
  cout<<'\n';
  cout<< removeDuplicates(x);
  cout<<'\n';
  for(int i:x){
    cout<<i<<' ';
  }
  return 0;
}
