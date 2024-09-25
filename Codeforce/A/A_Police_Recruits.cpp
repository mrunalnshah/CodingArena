/*
Codeforce : A. Police Recruits
Author   : Shah Mrunal Nirajkumar
Date     : 25 September 2024

Difficulty : Easy
*/

#include <bits\stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;

  int value;
  int totalUntreatedCases = 0;
  int totalPoice = 0;
  for (int i = 0; i < n; i++) {
    cin >> value;
    if (value != -1) {
      totalPoice = totalPoice + value;
    } else {
      if (!totalPoice) {
        totalUntreatedCases++;
      } else {
        totalPoice--;
      }
    }
  }
  cout << totalUntreatedCases << endl;
}

int main() {
  solve();

  return 0;
}