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

int calOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2,int p, int q)
{
  int n = img1.size();
  int sum=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i+p<0 || i+p>=n || j+q<0 || j+q>=n)
	continue;
      if(img1[i+p][j+q] && img2[i][j])
	sum++;
    }
  }
  return sum;
}

int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2)
{
  int n = img1.size(), sum = 0;
  for(int i=-n;i<n;i++){
    for(int j=-n;j<n;j++){
      sum = max(sum,calOverlap(img1, img2, i, j));
    }
  }
  return sum;
}

int main()
{
  return 0;
}
