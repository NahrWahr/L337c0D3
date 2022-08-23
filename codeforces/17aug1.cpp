#include<bits/stdc++.h>
using namespace std;

int EqFrac(vector<int> v)
{
  if((double) v[0]/v[1] == (double) v[2]/v[3]){
      return 0;
  }
  
  if(v[0]==0 || v[2] == 0){
      return 1;
  }
  
  float n1=(float) v[0]/v[2];
  float n2=(float) v[1]/v[3];
  if(((double)n1/n2==n1/n2) || ((double)n2/n1==n2/n1)){
      return 1;
  }
  
  return 2;
}

int main()
{
  int ncases;
  cin >> ncases;

  vector<vector<int>>tcases (ncases, vector<int>(4));
  for (int i = 0; i < ncases; i++)
    {
      cin >> tcases[i][0];
      cin >> tcases[i][1];
      cin >> tcases[i][2];
      cin >> tcases[i][3];
    }
    
  for(vector<int> c:tcases){
      cout<<EqFrac(c)<<'\n';
  }
    
  return 0;
}
