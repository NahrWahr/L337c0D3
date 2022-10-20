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

vector<int> maxSlidingWindow(vector<int> &x, int k)
{
  int n = x.size();
  vector<int> res;
  queue<int> w;

  int m=INT_MIN;
  for(int i=0;i<k;i++){
    w.push(x[i]);
    m = max(m, x[i]);
  }

  res.push_back(m);

  for(int i=k;i<n-k;i++){
    w.push(x[i]);
    if(x[i] > m){
      m = x[i];
    }
    res.push_back(m);
    w.pop();
  }
  
  return res;
}

int main()
{
  vector<int> x = {12,3,5,3,34,2,5,1,2,3,8,5,8,24,5};
  printV(maxSlidingWindow(x, 3));
  return 0;
}
