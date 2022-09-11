#include<bits/stdc++.h>
using namespace std;

vector<int> intersect(vector<int> &x, vector<int> &y)
{
  vector<int> res;
  unordered_map<int,int> mem;
  for(int i:x){
    mem[i]++;
  }
  for(int i:y){
    if(mem[i]>0){
      res.push_back(i);
      i--;
    }
  }
  return res;
}

int main()
{
  return 0;
}
