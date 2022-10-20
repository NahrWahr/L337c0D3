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

int maxCoins(vector<int> &p)
{
  int n = p.size();
  sort(p.begin(),p.end());
  int a=0,b=0,m=0;
  int i=0,j=n-1;
  while(i+1 < j){
    a += p[j];
    m += p[j-1];
    b += p[i];
    i++;
    j-=2;
  }
  cout<<a<<' '<<m<<' '<<b<<'\n';
  return m;
}

int main()
{
  vector<int> p1 = {2,4,1,2,7,8};
  vector<int> p2 = {2,4,5};
  vector<int> p3 = {9,8,7,6,5,1,2,3,4};
  
  cout<<maxCoins(p3);
  return 0;
}
