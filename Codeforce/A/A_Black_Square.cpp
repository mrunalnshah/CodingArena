/*
Codeforce : A. Black Square
Author   : Shah Mrunal Nirajkumar
Date     : 25 September 2024

Difficulty : Easy
*/

#include <bits\stdc++.h>

using namespace std;

void solve() {
  int a1, a2, a3, a4;
  cin >> a1 >> a2 >> a3 >> a4;

  string s;
  cin >> s;

  int totalCalories = 0;
  int value = 0;

  for (char c : s) {
    if (c >= '0' && c <= '9') {
      value = value * 10 + (c - '0');
    }

    if (value == 1) {
      totalCalories = totalCalories + a1;
    }
    if (value == 2) {
      totalCalories = totalCalories + a2;
    }
    if (value == 3) {
      totalCalories = totalCalories + a3;
    }
    if (value == 4) {
      totalCalories = totalCalories + a4;
    }
    value = 0;
  }
  cout << totalCalories << endl;
}

int main() {
  solve();

  return 0;
}