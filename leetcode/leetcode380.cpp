#include<bits/stdc++.h>
using namespace std;

void printV(vector<int> v)
{for(auto i:v) cout<<i<<' '; cout<<'\n';}
void printM(vector<vector<int>> m)
{for(auto v:m) printV(v);}

class RandomizedSet {
private:
  unordered_set<int> rset;
  
public:
  RandomizedSet() {}
  
  bool insert(int val) {
    if(rset.count(val))
      return true;
    else
      rset.insert(val);
    return false;
  }
  
  bool remove(int val) {
    if(!rset.count(val))
      return false;
    else
      rset.erase(val);
    return true;
  }
  
  int getRandom() {
    auto begin = rset.begin();
    auto size = rset.size();
    auto sample = rand()%size;
    auto res = next(begin, sample);
    return *res;
  }
};

int main()
{
  return 0;
}
