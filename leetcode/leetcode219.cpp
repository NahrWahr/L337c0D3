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

void showq(queue<int> gq)
{
  queue<int> g = gq;
  while (!g.empty()) {
    cout << '\t' << g.front();
    g.pop();
  }
  cout << '\n';
}

bool containsNearbyDuplicate(vector<int> &x, int k)
{
  queue<int> window;
  unordered_map<int,int> count;
  int n = x.size();
  k++;
  for(int i=0;i<(k>n?n:k);i++){
    window.push(x[i]);
    if(++count[x[i]] > 1) return true;
  }
  
  for(int i=k;i<n;i++){
    showq(window);
    count[window.front()]--;
    window.pop();
    window.push(x[i]);
    if(++count[x[i]] > 1) return true;
  }

  return false;
}

int main()
{
  vector<int> x = {1,2,3,4,2,3};
  cout<<containsNearbyDuplicate(x, 2);
  return 0;
}
