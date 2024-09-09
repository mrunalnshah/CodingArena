/*
LeetCode : 27. Remove Element
Author   : Shah Mrunal Nirajkumar
Date     : 09 September 2024

Method : Without using extra memory, i deleted elements from the original
vector<int> and then return the nums size.
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  void eraseValue(vector<int>& nums, int index) {
    for (int i = index; i < nums.size() - 1; i++) {
      nums[i] = nums[i + 1];
    }
    nums.pop_back();
  }
  int removeElement(vector<int>& nums, int val) {
    for (int i = 0; i < nums.size(); i++) {
      if (val == nums[i]) {
        eraseValue(nums, i);
        i--;
      } else {
        continue;
      }
    }
    return nums.size();
  }
};

int main() {
  // vector<int> nums = {3,2,2,3};
  // int val = 3;

  // vector<int> nums = {0,1,2,2,3,0,4,2};
  // int val = 2;

  vector<int> nums = {0, 0, 1, 1, 1, 5, 4, 3, 21, 7, 42, 11, 1, 1, 13};
  int val = 1;

  Solution myResult;
  cout << "Result " << myResult.removeElement(nums, val) << endl;

  return 0;
}