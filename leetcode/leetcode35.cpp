#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int> &x, int t)
{
     int l=0,h=x.size()-1;
     int n=(l+h)/2;

     while(l<=h){
	  n=(l+h)/2;
	  cout<<l<<' '<<h<<' '<<n<<'\n';
	  if(x[n] == t)
	       return n;
	  if(x[n] > t)
	       h=n-1;
	  if(x[n] < t)
	       l=n+1;
     }
     return (x[n]>t) ? n-1 : n+1;
}

int main()
{
     vector<int> x={1,3,5,6};
     int t = 2;
     cout<<searchInsert(x,t);
     return 0;
}
