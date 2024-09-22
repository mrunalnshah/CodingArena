/*
Codeforce : A. Petya and Strings
Author   : Shah Mrunal Nirajkumar
Date     : 17 September 2024

Difficulty : Easy
*/

#include <bits\stdc++.h>

using namespace std;

int solve() {
  string first, second;
  cin >> first >> second;

  transform(first.begin(), first.end(), first.begin(), ::tolower);
  transform(second.begin(), second.end(), second.begin(), ::tolower);

  for (int i = 0; i < first.size(); i++) {
    if (first[i] == second[i]) {
      continue;
    } else if (first[i] > second[i]) {
      return 1;
    } else {
      return -1;
    }
  }
  return 0;
}

int main() {
  int result = solve();

  cout << result << endl;

  return 0;
}