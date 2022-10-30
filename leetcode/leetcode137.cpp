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

int singleNumberSilly(vector<int> &x)
{
  int ones = 0, twos = 0;
  for(int i:x){
    ones = (ones ^ i) & ~twos;
    twos = (twos ^ i) & ~ones;
  }
  
  return ones;
}

int singleNumber(vector<int> &x)
{
  unordered_set<int> n;
  int sum=0;
  for(int i:x){
    n.insert(i);
    sum += i;
  }

  int sumuniq=0;
  for(auto i:n){
    sumuniq += i;
  }

  int res = sum - 3*sumuniq;
  return -res/2;
}

int main()
{
  vector<int> x = {1,2,4,1,3,2,4};
  cout<<singleNumber(x);
  return 0;
}
