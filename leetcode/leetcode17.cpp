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

vector<string> letterCombinations(string d)
{
  map<int,vector<char>> d2c;
  vector<string> ret;
  for(char c:d){
    string tmp;

    ret.push_back(tmp);
  }

  return ret;
}

int main()
{
  return 0;
}
