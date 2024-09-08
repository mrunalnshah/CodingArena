/*
LeetCode : 26. Remove Duplicates from Sorted Array
Author   : Shah Mrunal Nirajkumar
Date     : 08 September 2024

Method : Solved the problem by erasing the duplicate values from the vector
itself by creating an eraseValue function and returing the vector size.
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  void eraseValue(vector<int>& nums, int position) {
    for (int i = position; i < nums.size() - 1; i++) {
      nums[i] = nums[i + 1];
    }
    nums.pop_back();
  }

  int removeDuplicates(vector<int>& nums) {
    int lastUniqueValue = nums[0];

    int i = 1;
    while (i < nums.size()) {
      if (lastUniqueValue == nums[i]) {
        eraseValue(nums, i);
      } else {
        lastUniqueValue = nums[i];
        i++;
      }
    }
    return nums.size();
  }
  /*
  My Error:

  for loop made a problem here, i can decrease i by 1 after erasing a value to
  solve the problem.

  int removeDuplicates(vector<int>& nums) {
    int lastUniqueValue = nums[0];

    for(int i = 0; i < nums.size(); i++){
      if(lastUniqueValue == nums[i]){
        eraseValue(nums,i);
      }else {
        lastUniqueValue = nums[i];
      }
    }
    return nums.size();
  }
  */
};

int main() {
  // vector<int> nums = {1,2,2};
  // vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
  vector<int> nums = {0, 1, 1,  2,  3,  4,  5,  6,  7,  8,  9,
                      9, 9, 10, 11, 12, 12, 12, 13, 14, 15, 16};
  Solution myResult;
  cout << "Result " << myResult.removeDuplicates(nums) << endl;

  return 0;
}