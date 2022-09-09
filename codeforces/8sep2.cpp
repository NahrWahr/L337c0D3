#include<bits/stdc++.h>
using namespace std;

void bperm(int n){
  vector<int> res(n);
  res[n-1]=n;
  res[n-2]=n-1;
  for(int i=0;i<n-2;i++){
    res[i]=i+1;
  }
  //for(int i=1;i<n-2;i+=2){
  for(int i=n-3;i>0;i-=2){
    swap(res[i-1],res[i]);
  }

  for(int i:res){
    cout<<i<<' ';
  }
  cout<<'\n';
}

int main()
{
  int n;
  cin>>n;
  while(n--){
    int tc;
    cin>>tc;
    bperm(tc);
  }
  return 0;
}
