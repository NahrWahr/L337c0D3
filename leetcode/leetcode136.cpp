#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int> &x)
{
  int unique=0;
  for(int i:x){
    unique ^= i;
  }
  return unique;
}

int main()
{
  // int n=10;
  // vector<int> x(n);// = {1,2,3,2,2,3};
  // for(int i=0;i<n;i++){
  //   x[i] = rand()%10;
  //   cout<<x[i]<<' ';
  // }
  vector<int> x = {10,2,3,2,2,3};

  cout<<'\n'<<singleNumber(x);
  
  return 0;
}
