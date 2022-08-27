#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &x)
{
  int j=0, n=x.size(), t1=INT_MAX;
  
  for(int i=0;i<n;){
    if(t1==x[i]){
      i++;
      continue;
      }
    else{
      x[j]=x[i];
      t1=x[i];
      j++;
      i++;
    }
    if(i>=n) break;
    if(x[i]==t1){
	x[j]=x[i];
	j++;
    }
  }
  return j;
}

int main()
{
  vector<int> x={1};
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
