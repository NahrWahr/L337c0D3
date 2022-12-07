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

bool checkvowel(char c)
{
  bool v1 = (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
  bool v2 = (c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
  
  return v1 || v2;
}

string reverseVowels(string s)
{
  stack<char> vowels;
  for(auto c:s){
    if(checkvowel(c))
      vowels.push(c);
  }
  int n = s.length();
  for(int i=0;i<n;i++){
    if(checkvowel(s[i])){
      s[i] = vowels.top();
      vowels.pop();
    }
  }
  return s;
}

int main()
{
  string s = "leetcode";
  cout<<reverseVowels(s);
  return 0;
}
