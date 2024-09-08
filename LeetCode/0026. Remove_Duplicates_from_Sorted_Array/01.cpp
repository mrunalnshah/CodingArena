/*
LeetCode : 26. Remove Duplicates from Sorted Array
Author   : Shah Mrunal Nirajkumar
Date     : 08 September 2024

Method : Created a temp vector variable, stored the unique values in it and
then reassigned the temp vector variable to nums.
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  int removeDuplicates(vector<int>& nums) {
    vector<int> tempNums;

    tempNums.push_back(nums[0]);
    int lastUniqueValue = nums[0];
    for (int i = 1; i < nums.size(); i++) {
      if (lastUniqueValue == nums[i]) {
        continue;
      }
      tempNums.push_back(nums[i]);
      lastUniqueValue = nums[i];
    }
    nums = tempNums;
    return nums.size();
  }
};

int main() {
  // vector<int> nums = {1,2,2};
  // vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
  vector<int> nums = {0, 1, 1,  2,  3,  4,  5,  6,  7,  8,  9,
                      9, 9, 10, 11, 12, 12, 12, 13, 14, 15, 16};
  Solution myResult;
  cout << myResult.removeDuplicates(nums) << endl;

  return 0;
}