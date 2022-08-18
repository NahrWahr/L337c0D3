#include<bits/stdc++.h>
using namespace std;

void permuteR(vector<int>& v, uint b, vector<vector<int>>& res)
{
  if (b>=v.size())
    res.push_back(v);

  for(uint i=b; i<v.size(); i++){
    swap(v[b], v[i]);
    permuteR(v, b+1, res);
    swap(v[b], v[i]);
  }
}

vector<vector<int>> permute(vector<int>& v)
{
  vector<vector<int>> res;
  sort(v.begin(), v.end());
  res.push_back(v);
  while(next_permutation(v.begin(), v.end())){
      res.push_back(v);
    }
  //  permuteR(v, 0, res);
  return res;
}

void printV(vector<int> v)
{
  for(int n:v){
    cout<<n<<' ';
  }
}

int main()
{
  vector<int> v = {1,2,3};
  vector<vector<int>> res = permute(v);
  for(vector<int> n:res){
    printV(n);
    cout<<'\n';
  }
  return 0;
}
