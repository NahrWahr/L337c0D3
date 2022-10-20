#include<bits/stdc++.h>
using namespace std;

void printV(vector<int> v){
  for(int i:v){
    cout<<i<<' ';
  }
  cout<<'\n';
}

void printM(vector<vector<int>> m){
  for(vector<int> v:m){
    printV(v);
  }
}

int wateramt(vector<int> x)
{
  int n=x.size();
  int l=0,r=n-1;
  
  while(x[l]<=0 && x[r]<=0 && l<r){
    if(x[l]<=0)
      l++;
    if(x[r]<=0)
      r--;
  }

  int wateramt=0;
  for(int i=l;i<r;i++){
    if(x[l]<=0)
      wateramt++;
  }
  
  return wateramt;
}

int trap(vector<int>& h)
{
  bool isneg=true;
  for(int i:h){
    if(i>0)
      isneg=false;
  }
  if(isneg)
    return 0;
  
  int res=0;
  int n=h.size();

  res+=wateramt(h);
  
  for(int i=0;i<n;i++){
    h[i]>0 ? h[i]-- : h[i];
  }
  
  res+=trap(h);
  return res;
}

int main()
{
  vector<int> h={3,5,2,3,43,2,4,2,2,4,3,4};
  cout<<trap(h);
  return 0;
}
