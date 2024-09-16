/*
Codeforce : A. Beautiful Matrix
Author   : Shah Mrunal Nirajkumar
Date     : 14 September 2024

Difficulty : Easy
*/

#include <bits/stdc++.h>

using namespace std;

void solve() {
  int arr[5][5];
  int row, column;
  int steps = 0;

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> arr[i][j];
      if (arr[i][j] == 1) {
        row = i;
        column = j;
      }
    }
  }

  row = 2 - row;
  column = 2 - column;

  if (row <= -1) {
    row = row * -1;
  }
  if (column <= -1) {
    column = column * -1;
  }
  steps = row + column;

  cout << steps << endl;
}

int main() {
  solve();

  return 0;
}