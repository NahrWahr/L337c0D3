#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &x)
{
     int n=1;
     int u=x[0];
     
     for(int i=1;i<n;i++){
	  if(x[i]!=x[i-1]){
	       x[n]=x[i];
	       n++;
	       cout<<"ding";
	  }
     }
	  
     return n;
}

int main()
{
     vector<int> x={1,2,2,3,1,1,2,1,23,4,3,12,34};

     sort(x.begin(),x.end());
     for(int i:x){
	  cout<<i;
     }
     cout<<'\n';
     cout<<removeDuplicates(x);
     cout<<'\n';
     for(int i:x){
	  cout<<i;
     }
     return 0;
}

