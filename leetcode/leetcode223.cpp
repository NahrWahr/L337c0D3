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

int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2)
{
  int ar1 = (ax2-ax1)*(ay2-ay1);
  int ar2 = (bx2-bx1)*(by2-by1);
  int arc = 0;
  if(ax1 >= bx2 ||
     ax2 <= bx1 ||
     ay1 >= by2 ||
     ay2 <= by1)
    return ar1+ar2;

  arc = (min(ax2,bx2) - max(ax1,bx1))*(min(ay2,by2) - max(ay1,by1));
  return ar1+ar2-arc;
}


int main()
{
  return 0;
}
