/*
LeetCode : 155. Min Stack
Author   : Shah Mrunal Nirajkumar
Date     : 16 September 2024

Difficulty : Easy

Method : Created my own arr stack with dynamic resizing, and then wrote
push,pop, top, getMin functions.
*/

#include <iostream>
#include <stack>
#include <string>

using namespace std;

class MinStack {
  int topOfArray = -1;
  int* arr;
  int sizeOfArray = 1;

 public:
  MinStack() { 
    arr = new int[sizeOfArray]; 
  }
  ~MinStack() { 
    delete[] arr; 
  }

  void resize() {
    sizeOfArray = 2 * sizeOfArray;
    int* newArr = new int[sizeOfArray];
    for (int i = 0; i <= topOfArray; i++) {
      newArr[i] = arr[i];
    }
    delete[] arr;
    arr = newArr;
  }

  void push(int val) {
    if (topOfArray >= sizeOfArray - 1) {
      resize();
    }
    topOfArray++;
    arr[topOfArray] = val;
  }

  void pop() { 
    topOfArray--; 
  }

  int top() { 
    return arr[topOfArray]; 
  }

  int getMin() {
    int min = arr[0];
    for (int i = 1; i <= topOfArray; i++) {
      if (arr[i] >= min) {
        continue;
      }
      min = arr[i];
    }
    return min;
  }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

int main() {
  int top, getMin;
  MinStack minStack;
  minStack.push(-2);
  minStack.push(0);
  minStack.push(-3);
  getMin = minStack.getMin();
  cout << getMin << endl;
  minStack.pop();
  top = minStack.top();
  cout << top << endl;
  getMin = minStack.getMin();
  cout << getMin << endl;

  return 0;
}