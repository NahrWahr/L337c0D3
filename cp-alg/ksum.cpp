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

vector<vector<int>> twoSum(vector<int> x, int l, int h, int t)
{
  vector<vector<int>> res;

  while(l<h){
    int sum = x[l]+x[h];
    cout<<x[l]<<' '<<x[h];
    if(sum == t){
      res.push_back({x[l],x[h]});

      //      while(l<h && x[l] == x[l+1]);
      //      while(h>l && x[h] == x[h-1]);
    }
    else if(sum<t)
      l++;
    else
      h--;
  }
  return res;
}

vector<vector<int>> kSum(vector<int> x, int k, int t, int start=0)
{
  int n=x.size();
  vector<vector<int>> res;
  
  if(n<k)
    return res;

  sort(x.begin(),x.end());
  
  if(k==2){
    return twoSum(x, start, n-1, t);
  }
  
  else{
    for(int i=start;i<n-(k-1);i++){
      if(i>start && x[i] == x[i-1])
	continue;

      int ele=x[i];

      int rem = t-x[i];

      vector<vector<int>> smallKsum = kSum(x, k-1, rem, i+1);

      for(vector<int> v:smallKsum){
	v.push_back(ele);
      }

      res.insert(res.end(), smallKsum.begin(), smallKsum.end());
    }
  }
  return res;
}

int main()
{
  vector<int> x={1,1,1,0,2};
  printM(kSum(x, 2, 2));
  return 0;
}
