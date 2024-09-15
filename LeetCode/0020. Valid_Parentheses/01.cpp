/*
LeetCode : 20. Valid Parentheses
Author   : Shah Mrunal Nirajkumar
Date     : 15 September 2024

Difficulty : Easy

Method : create a stack and pushed parantheses into it and checked if it closed
correctly and popped it from stack.
*/

#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Solution {
 public:
  bool isValid(string s) {
    stack<char> myStack;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
        myStack.push(s[i]);
      } else {
        if (myStack.empty()) {
          return false;
        }
        if ((s[i] == ')' && myStack.top() != '(') ||
            (s[i] == ']' && myStack.top() != '[') ||
            (s[i] == '}' && myStack.top() != '{')) {
          return false;
        }
        myStack.pop();
      }
    }
    return myStack.empty();
  }
};

int main() {
  // string s = "()";
  // string s = "()[]{}";
  // string s = "(]";
  // string s = "([])";
  // string s = "([{()}])";
  // string s = "([{(}])";
  string s = "";

  bool result;
  Solution mySolution;
  result = mySolution.isValid(s);

  if (result == false) {
    cout << "False" << endl;
  } else {
    cout << "True" << endl;
  }
  return 0;
}