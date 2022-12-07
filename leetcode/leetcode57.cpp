#include<bits/stdc++.h>
using namespace std;

void printV(vector<int> v)
{
  for(auto i:v){
    cout<<i<<' ';
  }
  cout<<'\n';
}

void printM(vector<vector<int>> m)
{
  for(auto v:m){
    printV(v);
  }
}

// bool customSort(vector<int> a, vector<int> b)
// {
//   return a[0] < b[0];
// }

vector<vector<int>> insert(vector<vector<int>>& intv, vector<int> newi)
{
  vector<vector<int>> res;
  int lo=100000,hi=0;
  for(auto e:intv){
    if((e[0]<newi[0] && e[1]>newi[0]) || (e[0]<newi[1] && e[1]>newi[1])){
      lo = min(e[0], lo);
      hi = max(e[1], hi);
    }
    else{
      res.push_back(e);
    }
  }
  res.push_back({lo,hi});
  sort(res.begin(), res.end(),
       [](vector<int> a, vector<int> b)
       {
	 return a[1]<b[1];
       });
  return res;
}


int main()
{
  vector<vector<int>> i = {{1,3}, {6,9}};
  printM(insert(i, {2,5}));
  return 0;
}
