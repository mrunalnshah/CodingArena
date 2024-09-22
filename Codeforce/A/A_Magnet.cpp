/*
Codeforce : A. Magnets
Author   : Shah Mrunal Nirajkumar
Date     : 20 September 2024

Difficulty : Easy
*/

#include <bits\stdc++.h>

using namespace std;

int solve() {
  int input;
  cin >> input;

  int currMagnetValue;
  int prevMagnetValue;
  int group = 0;
  if (input == 0) {
    return group;
  }
  cin >> prevMagnetValue;
  group++;
  for (int i = 1; i < input; i++) {
    cin >> currMagnetValue;
    if (currMagnetValue != prevMagnetValue) {
      group++;
    }
    prevMagnetValue = currMagnetValue;
  }
  return group;
}

int main() {
  int result = solve();
  cout << result << endl;

  return 0;
}