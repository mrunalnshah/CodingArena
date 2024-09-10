/*
LeetCode : 1470. Shuffle the Array
Author   : Shah Mrunal Nirajkumar
Date     : 11 September 2024

Method : Created an vector<int> tempNums and stored the result in it.
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> tempNums;

    for (int i = 0; i < n; i++) {
      tempNums.push_back(nums[i]);
      tempNums.push_back(nums[i + n]);
    }
    nums = tempNums;
    return nums;
  }
};

int main() {
  // vector<int> nums = {2,5,1,3,4,7};
  // int n = 3;

  // vector<int> nums = {1,2,3,4,4,3,2,1};
  // int n = 4;

  vector<int> nums = {1, 1, 2, 2};
  int n = 2;

  Solution myResult;
  vector<int> result = myResult.shuffle(nums, n);
  for (int i = 0; i < result.size(); i++) {
    cout << result[i] << endl;
  }
  return 0;
}