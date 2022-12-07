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

string helper(string s)
{
  int n = s.length();
  vector<bool> flag(n);
  for(int i=1;i<n;i++){
    if(s[i] == s[i-1]){
      flag[i]=flag[i-1]=true;
      i++;
    }
  }

  string res;
  for(int i=0;i<n;i++){
    if(!flag[i])
      res.push_back(s[i]);
  }
  return res;
}

// string removeDuplicates(string s)
// {
//   while(true){
//     int n = s.length();
//     vector<bool> flag(n);
//     for(int i=1;i<n;i++){
//       if(s[i] == s[i-1]){
// 	flag[i]=flag[i-1]=true;
// 	i++;
//       }
//     }

//     string res;
//     for(int i=0;i<n;i++){
//       if(!flag[i])
// 	res.push_back(s[i]);
//     }
//     if(res.size() == s.size()){
//       s = res;
//       break;
//     }
//     else{
//       s=res;
//     }
//   }

//   return s;
// }

string removeDuplicates(string s)
{
  string res = "";
  for(char &c:s){
    if(res.size() && res.back() == c)
      res.pop_back();
    else
      res.push_back(c);
  }
  return res;
}

int main()
{
  string s = "abbaca";
  cout<<removeDuplicates(s);
  return 0;
}
