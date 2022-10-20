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

vector<vector<int>> threeSumstupid(vector<int>& x)
{
  int n=x.size();
  sort(x.begin(), x.end());

  vector<vector<int>> res;
  for(int i=0;i<n-2;i++){
    for(int k=n-1;k>i+1;k--){
      int t = -x[i]-x[k];
      int j=(i+k)/2;
      while(j>i && j<k){
	if(x[j] == t){
	  res.push_back({x[i],x[j],x[k]});
	  break;
	}
	if(x[j]>t)
	  j--;
	if(x[j]<t)
	  j++;
      }
    }
  }

  return res;
}

vector<vector<int>> threeSum(vector<int>& x)
{
  int n=x.size();
  sort(x.begin(), x.end());
  
  vector<vector<int>> res;
  for(int i=0;i<n-2;i++){
    
    if(i>0 && x[i] == x[i-1]){
      continue;
    }
    
    int l=i+1,r=n-1;
    while(l<r){
      int s=x[i]+x[l]+x[r];
      
      if(s<0)
	l++;
      
      else if(s>0)
	r--;
      
      else{
	res.push_back({x[i],x[l],x[r]});
	
	while(l<r && x[l] == x[l+1])
	  l++;
	while(l<r && x[r] == x[r-1])
	  r--;
	l++;
	r--;
      }
    }
  }
  
  return res;
}

int main()
{
  vector<int> x={-1,0,1,2,-1,-4};
  printM(threeSum(x));
  return 0;
}
