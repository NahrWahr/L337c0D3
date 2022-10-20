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

int size;
list<int> lru;
unordered_map<int,list<int>> mp;
unordered_map<int,int> hsh;

LRUCache(int capacity) : size(capacity)) {}

int get(int k)
{
  if(hsh.find(k) == hsh.end())
    return -1;
}

int main()
{
  return 0;
}
