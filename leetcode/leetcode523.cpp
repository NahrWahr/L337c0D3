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

bool checkSubarraySumSlow(vector<int>& x, int k)
{
  int n = x.size();

  int sum = 0;
  for(int i=0;i<n;i++){
    sum = x[i];
    for(int j=i+1;j<n;j++){
      sum += x[j];
      sum %= k;
      if(!sum)
	return true;
    }
    cout<<'\n';
  }
  return false;
}

bool checkSubarraySum(vector<int> x, int k)
{
  int n = x.size(), sum = 0, p = 0;
  unordered_set<int> modk;

  for(int i=0;i<n;i++){
    sum += x[i];
    sum %= k;
    if(modk.count(sum)) return true;
    modk.insert(p);
    p = sum;
  }

  return false;
}

int main()
{
  vector<int> x = {2,2,3,3,7};
  int k = 6;
  cout<<checkSubarraySum(x, k);
  return 0;
}
