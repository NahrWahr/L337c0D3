#include<bits/stdc++.h>
using namespace std;

void printV(vector<int> v){
  for(int i:v){
    cout<<i<<' ';
  }
  cout<<'\n';
}

void printS(unordered_set<string> s){
  for(auto e:s){
    cout<<e<<' ';
  }
  cout<<'\n';
}

int longestPalindrome(vector<string>& words)
{
  int res = 0;
  bool cent = false;

  unordered_map<string,int> mem;
  for(auto w:words){
    mem[w]++;
  }

  for(auto [w,c]:mem){
    if(w[0]==w[1]){
      if(c%2){
	cent = true;
	res += 2*(c-1);
      }
      else
	res += 2*c;
    }
    else{
      string rev = string(rbegin(w),rend(w));
      res += 2*(min(mem[w], mem[rev]));
    }
  }
  
  return cent ? res+2 : res; 
}

int main()
{
  vector<string> s = {"dd","aa","bb","dd","aa","dd","bb","dd","aa","cc","bb","cc","dd","cc"};
  cout<<longestPalindrome(s);
  return 0;
}
