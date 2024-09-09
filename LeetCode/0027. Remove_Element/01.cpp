/*
LeetCode : 27. Remove Element
Author   : Shah Mrunal Nirajkumar
Date     : 09 September 2024

Method : Created a vector<int> named tempNums and stored all values except the
targeted value, and then reassigned tempNums as nums and returned the nums size.
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  int removeElement(vector<int>& nums, int val) {
    vector<int> tempNums;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] == val) {
        continue;
      }
      tempNums.push_back(nums[i]);
    }
    nums = tempNums;
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