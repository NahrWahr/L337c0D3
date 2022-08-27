#include<bits/stdc++.h>
using namespace std;

bool containsNearbyAlmostDuplicate(vector<int> &x, int k, int t)
{
  int n=x.size();
  for(int i=0;i<n;i++){
    for(int j=i;j<=i+k && j<n;j++){
      if(abs(x[i]-x[j])<=t)
	return true;
    }
  }
  return false;
}

int main()
{
  vector<int> x={1,2,3,1};
  int k=3, t=0;
  cout<<containsNearbyAlmostDuplicate(x, k, t);
  return 0;
}
