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

bool compare(vector<int> a, vector<int> b){
  return a[1]<b[1];
}

int intvSch(vector<vector<int>> intvs)
{
  if(intvs.size() == 0)
    return 0;

  sort(intvs.begin(),intvs.end(), compare);

  int count = 1;
  int xe = intvs[0][1];
  for(vector<int> i : intvs){
    int s = i[0];
    if(s >= xe){
      count++;
      xe = i[1];
    }
  }
  
  return count;
}

int main()
{
  vector<vector<int>> intvs =
    {
      {1,3},
      {1,6},
      {4,7},
      {12,15}
    };

  cout<<intvSch(intvs);
  return 0;
}
