#include<bits/stdc++.h>
using namespace std;

void beauty(vector<int> x, int n){
  int amax=max_element(x.begin(),x.end()) - x.begin();
  int amin=min_element(x.begin(),x.end()) - x.begin();
  int h1=x[amax],l1=x[amin];
  int h2=0,l2=INT_MAX;
  for(int i=0;i<n;i++){
    if(i!=amax)
      h2=max(h2,x[i]);
    if(i!=amin)
      l2=min(l2,x[i]);
  }
  cout<<(h1-l1) + (h2-l2)<<'\n';
}

int main()
{
  int nc=0;
  cin >> nc;

  while(nc--){
    int n=0;
    cin >> n;
    vector<int> x(n);
    for(int i=0;i<n;i++){
      cin >> x[i];
    }

    beauty(x,n);
  }
  
  return 0;
}
