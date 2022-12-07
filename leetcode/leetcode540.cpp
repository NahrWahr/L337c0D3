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

int singleNonDuplicate(vector<int>& x)
{
  int n = x.size();

  int i = 0, j=n-1;
  while(i<j){
    int m = (i+j)/2;
    if(x[m] == x[m^1]){
      i = m+1;
    }
    else{
      j = m;
    }
  }
  return x[i];
}

int main()
{
  vector<int> x = {3,3,7,7,10,11,11};
  cout<<singleNonDuplicate(x);
  return 0;
}
