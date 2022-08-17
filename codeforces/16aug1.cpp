#include<bits/stdc++.h>
using namespace std;

// 1 1 T
// 1 4 B
// 5 6 B
// 2 2 T
// 6 3 B
// 999999999 1000000000 B

bool BWins(int n, int m)
{
  if((m&1) ^ (n&1))
    return true;
  else
    return false;
}

int main()
{
  int ncases;
  cin>>ncases;
  //ncases=1;
  vector<vector<int>> tcases(ncases, vector<int>(2));
  for(int i=0;i<ncases;i++){
    cin>>tcases[i][0];
    cin>>tcases[i][1];
  }

  for(vector<int> x:tcases){
    if (BWins(x[0], x[1])){
      cout<<"Burenka"<<'\n';
      }
    else
      cout<<"Tonya"<<'\n';
  }
  return 0;
}
