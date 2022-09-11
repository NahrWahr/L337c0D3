#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int> &x)
{
  int i=0,j=x.size()-1;
  int curv=0;
  auto vol=[](vector<int> &x, int i, int j){return min(x[i],x[j])*(j-i);};
  while(i<j){
    curv=max(curv,vol(x, i, j));
  }
  return curv;
}

int main()
{
  vector<int> x={3,4,5,1,2,3,4,3,5,1,23,6};
  cout<<maxArea(x);
  return 0;
}
