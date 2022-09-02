#include<bits/stdc++.h>
using namespace std;

int findminL(vector<int> &x, int k)
{
  int n=x.size();
  for(int i=0;i<n;i++){
    if(x[i]==k){
      for(int j=n-1;j>i;j--){
	if(x[j]==k){
	  //	  cout<<j<<' '<<i;
	  return j-i+1;
	}
      }
    }
  }
  return 0;
}

int findShortestSubArray(vector<int> &x)
{
  int minL=INT_MAX;
  map<int,int> count;
  int countmax=0;
  
  for(int i:x){
    count[i]++;
    if(count[i]>countmax){
      countmax=count[i];
    }
  }
  
  for(auto e:count){
    if(e.second==countmax){
      minL=min(minL, findminL(x, e.first));
    }
  }
  
  return minL;
}

int main()
{
  int n=10;
  vector<int> x(n);// = {1,2,3,23,4,2,21,2,4,3,21,34};
  for(int i=0;i<n;i++){
    x[i] = rand()%10 - 5;
    //cout<<x[i]<<' ';
  }
  
  cout<<'\n'<<findShortestSubArray(x);
  return 0;
}
