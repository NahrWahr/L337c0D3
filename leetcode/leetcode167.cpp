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

vector<int> twoSum(vector<int> &x, int t)
{
  int n = x.size();
  for(int i=0;i<=n/2;i++){
    int l=i, h=n-1;
    int tmp = t-x[i];
    while(l<=h){
      int m=(l+h)/2;
      
      if(x[m] == tmp)
	return {i, m};
      
      else if(x[m] > tmp){
	h = m-1;
      }

      else if(x[m] < tmp){
	l = m+1;
      }
    }
  }
  return {-1,-1};
}

vector<int> simple2sum(vector<int> &x, int t)
{
  int l=0, h=x.size()-1;
  while(l<h){
    int tmp = x[l]+x[h];

    if(tmp==t){
      return {l+1, h+1};
    }

    else if(tmp < t){
      l++;
    }

    else if(tmp > t){
      h--;
    }
  }

  return {-1, -1};
}

int main()
{
  vector<int> x = {1,3,6,7,9};
  sort(x.begin(),x.end());
  printV(simple2sum(x, 12));
  return 0;
}
