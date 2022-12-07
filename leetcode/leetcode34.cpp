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

vector<int> searchRange(vector<int>& x, int t)
{
  int n = x.size();

  int l = 0, h = n-1;
  vector<int> res;
  while(l<=h){
    int m = (l+h)/2;

    if(x[m] == t){
      res.push_back(m);
      while(x[m] == t) m--;
      res.push_back(m+1);
      reverse(res.begin(), res.end());
      return res;
    }
    else if(x[m] > t)
      h = m-1;
    else if(x[m] < t)
      l = m+1;
  }

  return {-1,-1};
}

int main()
{
  vector<int> x = {5,7,7,8,8,10};
  int t = 8;
  printV(searchRange(x, t));
  return 0;
}
