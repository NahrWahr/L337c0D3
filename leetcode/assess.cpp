#include<bits/stdc++.h>
using namespace std;

void printV(vector<int> V)
{
  for(auto n:V){
    cout<<n<<' ';
  }
  cout<<'\n';
}

void printM(vector<vector<int>> M)
{
  for(vector<int> v:M){
    printV(v);
  }
}

vector<string> SplitString(string &s)
{
  vector<string> words;
  string tmp;
  for(char c:s){
    if (c==' '){
      words.push_back(tmp);
      tmp="";
    }
    else{
      tmp+=c;
    }
  }
  words.push_back(tmp);

  return words;
}

bool wordPattern(string p, string s)
{
  vector<string> w = SplitString(s);
  
  for(string s:w){
    cout<<s<<' ';
  }
    
  int n=p.size();
  int m=w.size();
  if(n!=m)
    return false;
  
  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      if(p[i]==p[j] && w[i]!=w[j])
	return false;
    }
  }
  
  return true;
}

vector<vector<int>> updateMatrix(vector<vector<int>>& M)
{
  int m=M.size(), n=M[0].size();
  vector<vector<int>> O(m,vector<int>(n,0));
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      if (M[i][j]==0)
	O[i][j]=0;
    }
  }
  return O;
}

int main()
{
  string pattern = "aaaa", string = "dog cat cat dog";
  vector<vector<int>> M=
    {{0,0,0},
     {0,1,0},
     {1,1,1}};
  
  cout<<wordPattern(pattern, string);
  return 0;
}
