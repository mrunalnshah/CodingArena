/*
Codeforce : Vanya and Fence
Author   : Shah Mrunal Nirajkumar
Date     : 10 September 2024

Difficulty : Easy
*/

#include <bits/stdc++.h>

using namespace std;

void mySolution() {
  int input, maxHeight;
  int value;

  int result = 0;

  cin >> input;
  cin >> maxHeight;

  while (input) {
    cin >> value;
    input--;

    if (value > maxHeight) {
      result = result + 2;
    } else {
      result = result + 1;
    }
  }
  cout << result;
}

int main() {
  mySolution();

  return 0;
}