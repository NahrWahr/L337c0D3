#include<bits/stdc++.h>
using namespace std;

void printV(vector<int> v)
{
  for(auto i:v){
    cout<<i<<' ';
  }
  cout<<'\n';
}

void printM(vector<vector<int>> m)
{
  for(auto v:m){
    printV(v);
  }
}


vector<string> res;
int n = 0;
void helper(string s, stack<char> mem)
{
  if((int) s.length() == 2*n && mem.empty()){
    res.push_back(s);
    return;
  }
  if((int) s.length() > 2*n)
    return;

  mem.push('(');
  helper(s+'(', mem);
  mem.pop();

  if(!mem.empty()){
    mem.pop();
    helper(s+')', mem);    
  }
}

vector<string> generateParenthesis(int num)
{
  n = num;
  stack<char> mem;
  helper("", mem);
  return res;
}

int main()
{
  int n = 3;
  for(auto s:generateParenthesis(n)){
    cout<<s<<'\n';
  }
  return 0;
}
