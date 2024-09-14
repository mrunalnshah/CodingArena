/*
LeetCode : 682. Baseball Game
Author   : Shah Mrunal Nirajkumar
Date     : 14 September 2024

Difficulty : Easy

Method : Created a vector<int> myStack, and topOfArray to maintain a stack to
solve the problem, using push_back and pop_back we solve the problem. 
stoi is used to convert string number to integer number.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
 public:
  int calPoints(vector<string>& operations) {
    if (operations.size() == 0) {
      return 0;
    }
    vector<int> myStack;
    int topOfArray = -1;
    for (int i = 0; i < operations.size(); i++) {
      if (operations[i] == "+") {
        myStack.push_back(myStack[topOfArray] + myStack[topOfArray - 1]);
        topOfArray++;
      } else if (operations[i] == "D") {
        myStack.push_back(myStack[topOfArray] * 2);
        topOfArray++;
      } else if (operations[i] == "C") {
        myStack.pop_back();
        topOfArray--;
      } else {
        int value = stoi(operations[i]);
        myStack.push_back(value);
        topOfArray++;
      }
    }
    int sum = 0;
    for (int i = 0; i < myStack.size(); i++) {
      sum = sum + myStack[i];
    }
    return sum;
  }
};

int main() {
  // vector<string> operations = {"5","2","C","D","+"};
  // vector<string> operations = {"5","-2","4","C","D","9","+","+"};
  // vector<string> operations = {"1","C"};
  vector<string> operations = {};

  int result;
  Solution mySolution;
  result = mySolution.calPoints(operations);

  cout << result << endl;

  return 0;
}