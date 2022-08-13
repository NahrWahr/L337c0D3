#include <bits/stdc++.h>
using namespace std;

int CountKDifference(vector<int>& nums, int k)
{
  int n = nums.size();
  int count = 0;
  for (int i=0; i<n; i++){
    for (int j=i; j<n; j++){
      if (abs(nums[i]-nums[j]) == k){
	//	cout << nums[i] << ' ' << nums[j] << '\n';
	count += 1;
      }
    }
  }
  return count;
}

int main(){
  vector<int> nums = {1, 2, 3, 46, 4, 4, 3, 3, 8, 2, 6, 4, 2, 10, 10, 9, 4, 5, 10, 4, 1, 8, 6, 6, 6, 9, 6, 10, 2, 4, 6, 8, 5};
  int target = 2;
  int ans;
  ans = CountKDifference(nums, target);
  cout << ans;
  return 0;
}
