#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &x)
{
  map<int,int> count;
  for(int i:x){
    count[i]+=1;
  }
  pair<int,int> max={0,0};
  for(pair<int,int> i:count){
    if(i.second>max.second){
      max.first=i.first;
      max.second=i.second;
    }
  }
  return max.first;
}

int main()
{
  vector<int> x={1,1,2,2,1,1,2,2,1,2,1,2,2,1,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9};
  cout<<majorityElement(x);
  
  return 0;
}
