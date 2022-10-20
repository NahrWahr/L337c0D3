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

int minOperationsstupid(vector<int> &v)
{
  int n = v.size();
  vector<int> x(n+2,0);
  for(int i=0;i<n;i++){
    x[i+1] = v[i];
  }
  n += 2;

  vector<int> diff(n-1);
  for(int i=1;i<n;i++){
    diff[i-1] = x[i] - x[i-1];
  }
  printV(diff);

  int count = 0;
  int minima = 0;
  for(int i=1;i<n-1;i++){
    if(diff[i-1] * diff[i] <= 0){
      if(diff[i-1] < diff[i]){
	// minima
	cout<<"minima"<<' '<<i<<' '<<x[i]<<'\n';
	minima = x[i];
      }
	
      else{
	// maxima
	cout<<"maxima"<<' '<<i<<' '<<x[i]<<'\n';
	count += x[i] - minima;
      }

    }
  }

  return count;
}

int minOperations(vector<int> &x)
{
  int res = x[0], n = x.size();
  for(int i=1;i<n;i++){
    res+=max(0, x[i] -x[i-1]);
  }
  return res;
}

int main()
{
  vector<int> x = {1000,100,0,100,101};
  vector<int> y = {0,3,6,8,6,4,2};
  cout<<'\n'<<minOperations(y);
  return 0;
}
