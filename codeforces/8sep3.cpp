#include<bits/stdc++.h>
using namespace std;

void minSteps(vector<int> v1, vector<int> v2, int l)
{
  int n=0;
  map<int, bool> m1, m2;
  for(int i=0;i<l;i++){
    m1[v1[i]]=true;
    m2[v2[i]]=true;
  }
  vector<pair<int,int>> diff;


  for(auto i:diff){
    int x = i.first;
    int y = i.second;
  }
  cout<<n;
}

int main()
{
  int n;
  cin>>n;
  while(n--){
    int l;
    cin>>l;
    vector<int> v1(l), v2(l);
    for(int i=0;i<l;i++){
      cin>>v1[i];
    }
    for(int i=0;i<l;i++){
      cin>>v2[i];
    }

    minSteps(v1,v2,l);
  }
  return 0;
}
