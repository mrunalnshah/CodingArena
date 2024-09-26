/*
Codeforce : A. Night at the Museum
Author   : Shah Mrunal Nirajkumar
Date     : 26 September 2024

Difficulty : Easy
*/

#include <bits\stdc++.h>

using namespace std;

void solve() {
  string s;
  cin >> s;

  int totalRotation = 0;
  int clockWise;
  int antiClockWise;

  int value;
  char curChar = 'a';
  for (char c : s) {
    value = (curChar - 'a') % 26;
    clockWise = ((c - 'a') % 26) - value;
    if (clockWise < 0) {
      clockWise = clockWise * -1;
    }
    antiClockWise = 26 - clockWise;
    if (antiClockWise < 0) {
      antiClockWise = antiClockWise * -1;
    }

    if (clockWise <= antiClockWise) {
      totalRotation = totalRotation + clockWise;
    } else {
      totalRotation = totalRotation + antiClockWise;
    }
    curChar = c;
  }
  cout << totalRotation << endl;
}

int main() {
  solve();

  return 0;
}