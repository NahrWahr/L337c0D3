#include<bits/stdc++.h>
#define ll long long
using namespace std;

void printV(vector<ll> v)
{
  for(auto i:v){
    cout<<i<<' ';
  }
  cout<<'\n';
}

void printM(vector<vector<ll>> m)
{
  for(auto v:m){
    printV(v);
  }
}

bool comp(vector<int> a, vector<int> b)
{
  return a[0] < b[0];
}

vector<vector<ll>> splitPainting(vector<vector<int>>& seg)
{
  vector<ll> line(pow(10,5));
  for(auto v : seg){
    for(int i=v[0];i<v[1];i++){
      line[i] += v[2];
    }
  }

  vector<vector<ll>> res;
  int i = 0;
  while(++i < pow(10,5)){
    if(line[i]==0) continue;
    int j = i;
    while(j+1<20 && line[j] == line[j+1])
      j++;
    res.push_back({i, j+1, line[i]});
    i = j;
  }
  return res;
}


int main()
{
  vector<vector<int>> seg = {{1,7,9},{6,8,15},{8,10,7}};
  for(auto v:splitPainting(seg)) printV(v);
  return 0;
}
