#include<bits/stdc++.h>
using namespace std;

int remColor(vector<int> x)
{
  int ind=0;
  ind = max_element(x.begin(), x.end()) - x.begin();
  return ind+1;
}

int main()
{
  int n;
  cin>>n;
  while(n--){
    int l;
    cin>>l;
    vector<int> tc(l);
    for(int i=0;i<l;i++){
      cin>>tc[i];
    }
    cout<<remColor(tc)<<'\n';
  }
  return 0;
}
