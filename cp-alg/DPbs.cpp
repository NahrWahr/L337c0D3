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

int maxProfit(vector<int> &p)
{
  int n = p.size();
  if(n==0)
    return 0;

  int s1=-p[0], s2=INT_MIN, s3=INT_MIN, s4=INT_MIN;
  for(int i=1;i<n;++i){ 
    s1 = max(s1, -p[i]);
    s2 = max(s2, s1+p[i]);
    s3 = max(s3, s2-p[i]);
    s4 = max(s4, s3+p[i]);
  }
  return max(0,s4);
}



int main()
{
  return 0;
}
