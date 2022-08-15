#include<bits/stdc++.h>
using namespace std;

// Lexicographically Next Permutation in C++
// Sorting from increasing order array to decreasing order is Lexicographically next permutation
// 1 2 3 -> 1 3 2 -> 2 1 3 -> 2 3 1 -> 3 1 2 -> 3 2 1 

void nextPermutation(vector<int>& nums) {
  int n = nums.size(), k, l;
  for (k = n - 2; k >= 0; k--) {
    if (nums[k] < nums[k + 1]) {
      break;
    }
  }
  if (k < 0) {
    reverse(nums.begin(), nums.end());
  } else {
    for (l = n - 1; l > k; l--) {
      if (nums[l] > nums[k]) {
	break;
      }
    } 
    swap(nums[k], nums[l]);
    reverse(nums.begin() + k + 1, nums.end());
  }
   }

int main()
{
  vector<int> nums = {1,9,3,4,0};
  nextPermutation(nums);
  for(auto n:nums){
    cout<<n;
  }
  return 0;
}
