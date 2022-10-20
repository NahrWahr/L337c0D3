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

int minEatingSpeed(vector<int> p, int h, int k=1)
{
  int n = p.size();
  vector<int> pbk = p;
  int hbk = h;
  
  int i=0;
  while(h>0 && i<n){
    while(p[i]>0 && h){
      h--;
      p[i]=p[i]-k;
    }
    i++;
  }
  
  for(int b:p){
    if(b>0)
      return minEatingSpeed(pbk, hbk, k++);
  }

  return k;
}

int main()
{
  vector<int> p = {3,6,7,11};
  int h=4;
  cout<<minEatingSpeed(p, h);
  return 0;
}
