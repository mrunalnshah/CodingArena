/*
LeetCode : 1929. Concatenation of Array
Author   : Shah Mrunal Nirajkumar
Date     : 12 September 2024

Difficulty : Easy

Method : Created a vector<int> ans, and stored values in it.
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  vector<int> getConcatenation(vector<int>& nums) {
    if (nums.size() == 0) {
      return nums;
    }
    vector<int> ans(nums.size() * 2);

    for (int i = 0; i < nums.size(); i++) {
      ans[i] = nums[i];
      ans[i + nums.size()] = nums[i];
    }
    return ans;
  }
};

int main() {
  // vector<int> nums = {1,2,1};
  // vector<int> nums = {1,3,2,1};
  vector<int> nums = {1, 4, 2, 0, 1, 5, 9, 8, 4};

  vector<int> myResult;

  Solution mySolution;
  myResult = mySolution.getConcatenation(nums);

  for (int i = 0; i < myResult.size(); i++) {
    cout << myResult[i] << endl;
  }

  return 0;
}