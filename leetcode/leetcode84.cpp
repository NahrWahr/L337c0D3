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

// int largestRectangleArea(vector<int> &x) // wrong
// {
//   int n = x.size();
//   int lmax = 0, rmax = 0;
//   int l = 0, r = n-1;
//   int lp = l, rp = r;
//   while(l<n && r >=0){
//     int lm = (l-lp)*min(x[l], x[lp]);
//     if(lm > lmax){
//       lmax = lm;
//     }
//     else{
//       lp = l;
//     }
    
//     int rm = (r-rp)*min(x[r], x[rp]);
//     if(rm > rmax){
//       rmax = rm;
//     }
//     else{
//       rp = r;
//     }
    
//     l++;
//     r--;
//   }

//   return max(lmax,rmax);
// }

int largestRectangleArea(vector<int> &x)
{
  x.push_back(0);
  int n = x.size(), area = 0;
  stack<int> ind;
  for(int i=0;i<n;i++){
    while(!ind.empty() && x[ind.top()] > x[i]){
      int h = x[ind.top()];
      ind.pop();
      int l = ind.empty() ? -1 : ind.top();
      area = max(area, h*(i-l-1));
    }
    ind.push(i);
  }
  return area;
}

int main()
{
  vector<int> x = {2,1,5,6,2,3};
  vector<int> y = {2,4};
  cout<<largestRectangleArea(y);
  return 0;
}
