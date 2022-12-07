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

int sol(vector<int> req)
{
  int n = req.size();
  int drops = 0;
  queue<int> sec, tsec, min;
  for(int i=0;i<n;i++){

    if(i>3 && req[i] - req[i-3] < 0)
      drops++;
    if(i>19 && req[i] - req[i-19] < 10)
      drops++;
    if(i>59 && req[i] - req[i-59] < 60)
      drops++; 
    // sec.push(req[i]);
    // tsec.push(req[i]);
    // min.push(req[i]);

    // if(sec.size() > 3){
    //   if(sec.back()-sec.front() < 0)
    // 	drops++;
    //   sec.pop();
    // }
    // else if(tsec.size() > 10){ 
    //   if(tsec.back()-tsec.front() < 9)
    // 	drops++;
    //   tsec.pop();
    // }
    // else if(min.size() > 60){
    //   if(min.back()-min.front() < 59)
    // 	drops++;
    //   min.pop();
    // }    
  }
  
  return drops;
}

int main()
{
  vector<int> req={1,1,1,1,2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,11,11,11,11};
  cout<<sol(req);
  return 0;
}
