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

int solution(int n)
{
  vector<int> k={1};
  int p=0,q=0;
  
  while(n--){
    int tmp = min(k[p]*2, k[q]*3);
    k.push_back(tmp);
    int i=k.back();
    if(i/2==k[p]) p++;
    if(i/3==k[q]) q++;
  }
  
  return k.back();
}

int main()
{
  return 0;
}
