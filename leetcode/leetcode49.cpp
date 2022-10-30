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

vector<vector<string>> groupAnagrams(vector<string>& strs)
{
  unordered_map<string, int> strType;
  unordered_map<string, int> strGroup;

  int n = 0;
  for(string s:strs){
    string tmp = s;
    sort(tmp.begin(),tmp.end());

    if(strType.find(tmp) == strType.end()){
      strType[tmp] = n++;
    }
    strGroup[s] = strType[tmp];
  }
  
  vector<vector<string>> res(n);
  for(string s:strs){
    res[strGroup[s]].push_back(s);
  }
  
  return res;
}

int main()
{
  vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
  groupAnagrams(strs);
  return 0;
}
