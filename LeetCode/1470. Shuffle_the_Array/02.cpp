/*
LeetCode : 1470. Shuffle the Array
Author   : Shah Mrunal Nirajkumar
Date     : 11 September 2024

Difficulty : Medium

Method : without creating any additional vector<int>, with only insert and erase
function, we did manipulation on original array to get the result.
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  void insertValue(vector<int>& nums, int value, int index) {
    nums.push_back(0);
    for (int i = nums.size() - 2; i >= index; i--) {
      nums[i + 1] = nums[i];
    }
    nums[index] = value;
  }
  void eraseValue(vector<int>& nums, int index) {
    for (int i = index; i < nums.size() - 1; i++) {
      nums[i] = nums[i + 1];
    }
    nums.pop_back();
  }
  vector<int> shuffle(vector<int>& nums, int n) {
    int i = 0;
    int j = n;
    while (j < nums.size()) {
      int value = nums[j];
      eraseValue(nums, j);
      insertValue(nums, value, i + 1);
      i = i + 2;
      j++;
    }
    return nums;
  }
};

int main() {
  // vector<int> nums = {2,5,1,3,4,7};
  // int n = 3;

  // vector<int> nums = {1,2,3,4,4,3,2,1};
  //  int n = 4;

  vector<int> nums = {1, 1, 2, 2};
  int n = 2;

  Solution myResult;
  vector<int> result = myResult.shuffle(nums, n);
  for (int i = 0; i < result.size(); i++) {
    cout << result[i] << endl;
  }
  return 0;
}