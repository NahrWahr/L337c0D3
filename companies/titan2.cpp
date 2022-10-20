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

int fun(vector<int> &c, vector<int> &d)
{
  int m = c.size();
  int n = d.size();

  for(int k=0;k<m;k++){
    vector<int> ct = c;
    int i;
    
    for(i=0;i<n;i++){
      ct[(i+k)%m] -= d[i];
      if(ct[(i+k)%m] < 0)
	break;
    }

    if(i == n)
      return k+1;
  }

  return -1;
}

int main()
{
  vector<int> c = {1,2,3,4,5};
  vector<int> d = {4,5,1,2,3};
  cout<<fun(c,d);
  return 0;
}
