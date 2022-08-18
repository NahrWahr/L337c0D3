#include<bits/stdc++.h>
using namespace std;

void printV(vector<int> v)
{
  for(int n:v){
    cout<<n<<' ';
  }
  cout<<'\n';
}

void printM(vector<vector<int>> m)
{
  for(vector<int> v:m){
    printV(v);
  }
}

vector<int> pivotArray(vector<int> &v, int t)
{
  vector<int> s,e,l;
  for(int i:v){
    if (i<t)
      s.push_back(i);
    else if (i==t)
      e.push_back(i);
    else
      l.push_back(i);
  }

  s.insert(s.end(), e.begin(), e.end());
  s.insert(s.end(), l.begin(), l.end());
  return s;
}
  
int main()
{
  vector<int> v = {1,4,3,2,5,2}; // -> {1,2,2,4,3,5}
  int t = 3;

  pivotArray(v, t);
  return 0;
}
