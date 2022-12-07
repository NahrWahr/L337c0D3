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

int calculate(string s)
{
  int total = 0, n=s.length();
  vector<int> signs(2,1);
  for(int i=0;i<n;i++){
    char c = s[i];
    
    if(c>='0'){
      long long num = 0;
      while(i<n && s[i] >= '0')
	num = 10*num + s[i++] - '0';

      total += signs.back() * num;
      signs.pop_back();
      i--;
    }
    
    else if(c==')')
      signs.pop_back();
    
    else if(c!=' ')
      signs.push_back(signs.back() * (c=='-' ? -1 : 1));
  }

  return total;
}

int main()
{
  return 0;
}
