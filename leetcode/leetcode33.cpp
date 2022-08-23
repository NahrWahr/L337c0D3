#include<bits/stdc++.h>
using namespace std;

int search(vector<int> &x, int t)
{
  int n = x.size();
  int l=0,h=n-1;
  int m=0;
  while(l<h){
    m = (l+h)/2;
    if(x[m]>x[h]) l=m+1;
    else h=m;
  }
  
  int rot=m;
  l=0,h=n-1;
  while(l<=h){
    m=(l+h)/2;
    int rm=(m+rot)%n;
    if(x[rm]==t) return rm;
    else if(x[rm]<t) l=m+1;
    else h=m-1;
  }
  
  return -1;
}

int main(){
  vector<int> nums = {5,1,3};
  int target = 5;
  cout << search(nums, target);
  
  return 0;
}
