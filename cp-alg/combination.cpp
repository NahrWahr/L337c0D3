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

vector<vector<int>> res;

void backtrack(int n, int k, int start, vector<int>& track) {
  if (k == (int)track.size()) {
    res.push_back(track);
    return;
  }

  for (int i = start; i <= n; i++) {
    track.push_back(i);
    backtrack(n, k, i + 1, track);
    track.pop_back();
  }
}

vector<vector<int>> combine(int n, int k) {
  if (k <= 0 || n <= 0) return res;
  vector<int> track;
  backtrack(n, k, 1, track);
  return res;
}

void nestedloop(int n, int k)
{
  int start = 0;
  while(k--){
    for(int i=start;i<n;i++){
      cout<<i<<' ';
    }
    cout<<'\n';
    start ++;
  }
}

int main()
{
  nestedloop(3, 2);
  return 0;
}
