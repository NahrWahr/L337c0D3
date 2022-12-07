#include<bits/stdc++.h>
using namespace std;

void printV(vector<int> v)
{for(auto i:v) cout<<i<<' '; cout<<'\n';}
void printM(vector<vector<int>> m)
{for(auto v:m) printV(v);}

bool uniqueOccurrences(vector<int>& x)
{
  unordered_map<int, int> count;
  for(auto i:x){
    count[i]++;
  }
  
  unordered_set<int> mem;
  for(auto p:count){
    if(mem.count(p.second))
      return false;
    mem.insert(p.second);
  }

  return true;
}

int main()
{
  vector<int> x = {1,2,2,1,3};
  cout<<uniqueOccurrences(x);
  return 0;
}
