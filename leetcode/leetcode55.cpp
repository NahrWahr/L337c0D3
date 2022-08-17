#include<bits/stdc++.h>
using namespace std;

bool avoidable(vector<int>& nums, int k)
{
  for(int i=k-1;i>=0;i--){
    if (nums[i]>(k-i))
      return true;
  }
  return false;
}

vector<int> find0(vector<int>& nums)
{
  int n = nums.size();
  vector<int> Index0;
  for(int i=0; i<n-1; i++){
    if (nums[i]==0)
      Index0.push_back(i);
  }
  return Index0;
}

bool canJump(vector<int>& nums)
{
  vector<int> Index0=find0(nums);

  for(int k:Index0){
    if (avoidable(nums, k))
      continue;
    else
      return false;
  }
  
  return true;
}

int main()
{
  vector<int> nums ={3,2,1,0,4};
  cout<<canJump(nums);
  return 0;
}
