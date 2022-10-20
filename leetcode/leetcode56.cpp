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

vector<vector<int>> merge(vector<vector<int>> &x)
{
  sort(x.begin(),x.end(), [](vector<int> a, vector<int> b){return a[0]<b[0];});
  int n = x.size();

  vector<vector<int>> res;
  int b=x[0][0],e=x[0][1];
  for(int i=0;i<n;i++){
    if(e > x[i][0]){
      e = x[i][1];
    }
    else if(e <= x[i][0]){
      //      cout<<b<<' '<<e<<" | ";
      res.push_back({b, e});
      b = x[i][0];
      e = x[i][1];
    }
  }
  res.push_back({b, e});
  return res;
}

int main()
{
  vector<vector<int>> x = {{1,3},{2,6},{8,10},{15,18}};
  printM(merge(x));
  return 0;
}
