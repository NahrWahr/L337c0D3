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

int fib(int n, vector<int>& mem)
{
  if(mem[n] != 0)
    return mem[n];

  mem[n] = fib(n-1, mem) + fib(n-2, mem);
  return mem[n];
}

int fib(int n)
{
  vector<int> mem(n+1);
  mem[1]=mem[2]=1;
  
  return fib(n, mem);
}

int fibrec(int n)
{
  vector<int> dp(n+1);
  dp[1]=dp[2]=1;

  for(int i=3;i<n+1;i++){
    dp[i] = dp[i-1] + dp[i-2];
  }
  return dp[n];
}

int fibiter(int n)
{
  if(n==1 || n==2)
    return 1;

  int a=1,b=1,c=a+b;
  for(int i=3;i<=n;i++){
    c = a+b;
    a = b;
    b = c;
  }
  return c;
}

int fibslow(int n)
{
  if(n==1 || n==2)
    return 1;
  return fibslow(n-1) + fibslow(n-2);
}

int main()
{
  int n=10;
  cout<<fibiter(n);
  return 0;
}
