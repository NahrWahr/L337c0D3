#include<bits/stdc++.h>
using namespace std;

void printV(vector<int> v)
{
  for(int i:v){
    cout<<i<<' ';
  }
  cout<<'\n';
}

void ComSum(vector<int> &x,
	    int t,
	    vector<vector<int>> &res,
	    vector<int> v)
{
  if(t<0)
    return;
  if(t==0)
    res.push_back(v);

  for(int i:x){
    if(v.size()!=0 && v.back()>i)
      continue;
    v.push_back(i);
    ComSum(x, t-i, res, v);
    v.pop_back();
  }
}

vector<vector<int>> combinationSum(vector<int> &x, int t)
{
  vector<vector<int>> res;
  vector<int> v(0);
  ComSum(x, t, res, v);
  return res;
}

int main(){
  vector<int> x;
  for(int i=0;i<10;i++){
    x.push_back(2 + rand()%20);
  }
  int t=17;
  sort(x.begin(),x.end());

  vector<vector<int>> ans = combinationSum(x, t);
  for(vector<int> v:ans){
    printV(v);
  }
  return 0;
}
