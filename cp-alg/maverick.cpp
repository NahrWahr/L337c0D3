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

unordered_set<int> primes(int n)
{
  unordered_set<int> res;
  vector<int> v(n+1, 1);
  v[0] = v[1] = 0;
  for(int i=2;i<n+1;i++){
    if(v[i]){
      for(int j=2*i;j<n+1;j+=i){
	v[j] = 0;
      }
    }
  }

  for(int i=2;i<n+1;i++){
    if(v[i])
      res.insert(i);
  }
  return res;
}

int sumPind(vector<int> &x)
{
  int n = x.size();
  unordered_set<int> p = primes(n);

  int ret = 0;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(p.find(j-i) != p.end()){
	ret += x[j] - x[i];
      }
    }
  }

  return ret;
}

int main()
{
  vector<int> x = {1,23,5,3,6,12,35,2,3,412,2,61,234};
  cout<<sumPind(x);
  return 0;
}
