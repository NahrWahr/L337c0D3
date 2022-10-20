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

vector<vector<int>> subsets(vector<int> &x)
{
  int n = x.size();
  vector<vector<int>> res = {{}};
  for(int i=0;i<n;i++){
    int l = res.size();
    for(int j=0;j<l;j++){
      vector<int> v = res[j];
      v.push_back(x[i]);
      res.push_back(v);
    }
  }

  return res;
}

int main()
{
  vector<int> x = {1,2,3};
  printM(subsets(x));
  return 0;
}
