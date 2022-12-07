#include<bits/stdc++.h>
using namespace std;

void printV(vector<int> v)
{for(auto i:v) cout<<i<<' '; cout<<'\n';}
void printM(vector<vector<int>> m)
{for(auto v:m) printV(v);}

vector<vector<int>> findWinners(vector<vector<int>> &m)
{
  unordered_map<int,int> mem;
  for(auto e:m){
    mem[e[1]]++;
    mem[e[0]]+=0;
  }

  vector<int> lostNone;
  vector<int> lostOne;
  for(auto p:mem){
    if(p.second == 0)
      lostNone.push_back(p.first);
    if(p.second == 1)
      lostOne.push_back(p.first);
  }

  sort(lostNone.begin(), lostNone.end());
  sort(lostOne.begin(),lostOne.end());

  return {lostNone, lostOne};
}

int main()
{
  vector<vector<int>> matches = {{1,3},{2,3},{3,6},{5,6},{5,7},{4,5},{4,8},{4,9},{10,4},{10,9}};
  printM(findWinners(matches));
  return 0;
}
