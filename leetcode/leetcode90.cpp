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

vector<vector<int>> subsetsWithDup(vector<int>& x)
{
  sort(x.begin(), x.end());
  vector<vector<int>> res = {{}};

  int n = x.size(), j;
  for(int i=0;i<n;i++){
    if(i==0 || x[i]!=x[i-1])
      j = 0;
    
    int l = res.size();
    for(;j<l;j++){
      vector<int> tmp = res[j];
      tmp.push_back(x[i]);
      res.push_back(tmp);
    }
  }
  return res;
}

int main()
{
  vector<int> x = {2,2,3};
  printM(subsetsWithDup(x));
  
  return 0;
}
